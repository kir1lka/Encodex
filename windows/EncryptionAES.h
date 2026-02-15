#pragma once

using namespace System;
using namespace System::Text;
using namespace System::Security::Cryptography;

String^ encryptAES(String^ plainText, String^ key) {
    // подготовка ключа (16 байт для AES-128)
    array<Byte>^ keyBytes = gcnew array<Byte>(16);
    array<Byte>^ inputKey = Encoding::UTF8->GetBytes(key);
    Array::Copy(inputKey, keyBytes, Math::Min(16, inputKey->Length));

    // настройка AES ключ и случайный IV
    Aes^ aes = Aes::Create();
    aes->Key = keyBytes;
    aes->GenerateIV();

    // шифрование текста
    ICryptoTransform^ encryptor = aes->CreateEncryptor();
    array<Byte>^ inputBytes = Encoding::UTF8->GetBytes(plainText);
    array<Byte>^ encrypted = encryptor->TransformFinalBlock(inputBytes, 0, inputBytes->Length);

    // объединение IV и зашифрованных данных
    array<Byte>^ result = gcnew array<Byte>(aes->IV->Length + encrypted->Length);
    Array::Copy(aes->IV, 0, result, 0, aes->IV->Length);
    Array::Copy(encrypted, 0, result, aes->IV->Length, encrypted->Length);

    // возврат результата в Base64
    return Convert::ToBase64String(result);
}

String^ decryptAES(String^ encryptedText, String^ key) {
    // декодирование Base64 в байты
    array<Byte>^ allBytes = Convert::FromBase64String(encryptedText);

    // подготовка ключа (16 байт)
    array<Byte>^ keyBytes = gcnew array<Byte>(16);
    array<Byte>^ inputKey = Encoding::UTF8->GetBytes(key);
    Array::Copy(inputKey, keyBytes, Math::Min(16, inputKey->Length));

    // извлечение IV и зашифрованного текста
    array<Byte>^ iv = gcnew array<Byte>(16);
    array<Byte>^ cipherText = gcnew array<Byte>(allBytes->Length - 16);
    Array::Copy(allBytes, 0, iv, 0, 16);
    Array::Copy(allBytes, 16, cipherText, 0, cipherText->Length);

    // настройка AES ключ и IV
    Aes^ aes = Aes::Create();
    aes->Key = keyBytes;
    aes->IV = iv;

    // дешифрование
    ICryptoTransform^ decryptor = aes->CreateDecryptor();
    array<Byte>^ decryptedBytes = decryptor->TransformFinalBlock(cipherText, 0, cipherText->Length);

    // возврат расшифрованного текста
    return Encoding::UTF8->GetString(decryptedBytes);
}






//using namespace System;
//using namespace System::Text;
//using namespace System::Security::Cryptography;
//
//String^ encryptAES(String^ plainText, String^ key) {
//    array<Byte>^ keyBytes = gcnew array<Byte>(16);
//    array<Byte>^ inputKey = Encoding::UTF8->GetBytes(key);
//    Array::Copy(inputKey, keyBytes, Math::Min(16, inputKey->Length));
//
//    Aes^ aes = Aes::Create();
//    aes->Key = keyBytes;
//    aes->GenerateIV(); 
//
//    ICryptoTransform^ encryptor = aes->CreateEncryptor();
//    array<Byte>^ inputBytes = Encoding::UTF8->GetBytes(plainText);
//    array<Byte>^ encrypted = encryptor->TransformFinalBlock(inputBytes, 0, inputBytes->Length);
//
//    array<Byte>^ result = gcnew array<Byte>(aes->IV->Length + encrypted->Length);
//    Array::Copy(aes->IV, 0, result, 0, aes->IV->Length);
//    Array::Copy(encrypted, 0, result, aes->IV->Length, encrypted->Length);
//
//    return Convert::ToBase64String(result);
//}
//
//
//String^ decryptAES(String^ encryptedText, String^ key) {
//    array<Byte>^ allBytes = Convert::FromBase64String(encryptedText);
//
//    array<Byte>^ keyBytes = gcnew array<Byte>(16);
//    array<Byte>^ inputKey = Encoding::UTF8->GetBytes(key);
//    Array::Copy(inputKey, keyBytes, Math::Min(16, inputKey->Length));
//
//    array<Byte>^ iv = gcnew array<Byte>(16);
//    array<Byte>^ cipherText = gcnew array<Byte>(allBytes->Length - 16);
//    Array::Copy(allBytes, 0, iv, 0, 16);
//    Array::Copy(allBytes, 16, cipherText, 0, cipherText->Length);
//
//    Aes^ aes = Aes::Create();
//    aes->Key = keyBytes;
//    aes->IV = iv;
//
//    ICryptoTransform^ decryptor = aes->CreateDecryptor();
//    array<Byte>^ decryptedBytes = decryptor->TransformFinalBlock(cipherText, 0, cipherText->Length);
//
//    return Encoding::UTF8->GetString(decryptedBytes);
//}




//#include <string>
//#include "aes.hpp"
//#include <aes.h>
//#include <vector>
//#include <cstring>
//#include <cryptlib.h>
//#include <base64.h>
//#include <osrng.h>
//#include <stdexcept>
//
//
//#define CBC 1
//
//std::string encryptAES(const std::string& plaintext, const std::string& inputKey) {
//    using namespace CryptoPP;
//    // преобразование ключа в 16 байтный массив AES-128
//    uint8_t key[16] = { 0 };
//    size_t keyLen = inputKey.length() > 16 ? 16 : inputKey.length();
//    memcpy(key, inputKey.c_str(), keyLen);
//
//    // генерация случайного IV
//    uint8_t iv[16];
//    CryptoPP::AutoSeededRandomPool prng;
//    prng.GenerateBlock(iv, 16);
//
//    // добавление PKCS#7 padding
//    size_t plaintext_len = plaintext.length();
//    size_t padded_len = plaintext_len;
//    if (padded_len % 16 != 0) {
//        padded_len += 16 - (padded_len % 16);
//    }
//    std::vector<uint8_t> padded_plaintext(padded_len);
//    memcpy(padded_plaintext.data(), plaintext.c_str(), plaintext_len);
//    uint8_t padding_value = padded_len - plaintext_len;
//    for (size_t i = plaintext_len; i < padded_len; ++i) {
//        padded_plaintext[i] = padding_value;
//    }
//
//    // шифрование
//    AES_ctx ctx;
//    AES_init_ctx_iv(&ctx, key, iv);
//    AES_CBC_encrypt_buffer(&ctx, padded_plaintext.data(), padded_len);
//
//    // сохранение IV + шифрованный текст
//    std::string ciphertext;
//    ciphertext.append(reinterpret_cast<char*>(iv), 16);
//    ciphertext.append(reinterpret_cast<char*>(padded_plaintext.data()), padded_len);
//
//    // кодирование в Base64 
//    std::string encoded;
//    CryptoPP::Base64Encoder encoder(nullptr, false); // false отключает переносы строк
//    encoder.Put(reinterpret_cast<const byte*>(ciphertext.data()), ciphertext.length());
//    encoder.MessageEnd();
//    encoded.resize(encoder.MaxRetrievable());
//    encoder.Get(reinterpret_cast<byte*>(&encoded[0]), encoded.length());
//
//    return encoded;
//}
//
//std::string decryptAES(const std::string& encodedCiphertext, const std::string& inputKey) {
//    using namespace CryptoPP;
//
//    std::string ciphertext;
//    CryptoPP::Base64Decoder decoder;
//    decoder.Put(reinterpret_cast<const byte*>(encodedCiphertext.data()), encodedCiphertext.length());
//    decoder.MessageEnd();
//    ciphertext.resize(decoder.MaxRetrievable());
//    decoder.Get(reinterpret_cast<byte*>(&ciphertext[0]), ciphertext.length());
//
//    if (ciphertext.length() < 16 + 1) {
//        throw std::runtime_error("Invalid ciphertext length");
//    }
//
//    uint8_t iv[16];
//    memcpy(iv, ciphertext.data(), 16);
//    size_t padded_len = ciphertext.length() - 16;
//    std::vector<uint8_t> padded_ciphertext(padded_len);
//    memcpy(padded_ciphertext.data(), ciphertext.data() + 16, padded_len);
//
//    uint8_t key[16] = { 0 };
//    size_t keyLen = inputKey.length() > 16 ? 16 : inputKey.length();
//    memcpy(key, inputKey.c_str(), keyLen);
//
//    AES_ctx ctx;
//    AES_init_ctx_iv(&ctx, key, iv);
//    AES_CBC_decrypt_buffer(&ctx, padded_ciphertext.data(), padded_len);
//
//    if (padded_len > 0) {
//        uint8_t unpadding_value = padded_ciphertext.back();
//        if (unpadding_value > 0 && unpadding_value <= 16 && padded_len >= unpadding_value) {
//            padded_ciphertext.resize(padded_len - unpadding_value);
//        }
//        else if (unpadding_value > padded_len) {
//            throw std::runtime_error("Invalid padding");
//        }
//    }
//
//    return std::string(padded_ciphertext.begin(), padded_ciphertext.end());
//}
//0000000000000000000000000000000000000000000000000000000000000000000000000000

//#include <string>
//#include "aes.hpp"
//#include <vector>
//#include <cstring>
//#include <cryptlib.h>
//#include <base64.h>
//#include <osrng.h>
//#include <stdexcept>
//
//using namespace std;
//
//#define CBC 1
//
//string encryptAES(const string& plaintext, const string& inputKey) {
//    using namespace CryptoPP;
//    // преобразование ключа в 16 байтный массив AES-128
//    uint8_t key[16] = { 0 };
//    size_t keyLen = inputKey.length() > 16 ? 16 : inputKey.length();
//    memcpy(key, inputKey.c_str(), keyLen);
//
//    // генерация случайного IV
//    uint8_t iv[16];
//    CryptoPP::AutoSeededRandomPool prng;
//    prng.GenerateBlock(iv, 16);
//
//    // добавление PKCS#7 padding
//    size_t plaintext_len = plaintext.length();
//    size_t padded_len = plaintext_len;
//    if (padded_len % 16 != 0) {
//        padded_len += 16 - (padded_len % 16);
//    }
//    vector<uint8_t> padded_plaintext(padded_len);
//    memcpy(padded_plaintext.data(), plaintext.c_str(), plaintext_len);
//    uint8_t padding_value = padded_len - plaintext_len;
//    for (size_t i = plaintext_len; i < padded_len; ++i) {
//        padded_plaintext[i] = padding_value;
//    }
//
//    // шифрование
//    AES_ctx ctx;
//    AES_init_ctx_iv(&ctx, key, iv);
//    AES_CBC_encrypt_buffer(&ctx, padded_plaintext.data(), padded_len);
//
//    // сохранение IV + шифрованный текст
//    string ciphertext;
//    ciphertext.append(reinterpret_cast<char*>(iv), 16);
//    ciphertext.append(reinterpret_cast<char*>(padded_plaintext.data()), padded_len);
//
//    // кодирование в Base64 
//    string encoded;
//    CryptoPP::Base64Encoder encoder(nullptr, false); // false отключает переносы строк
//    encoder.Put(reinterpret_cast<const byte*>(ciphertext.data()), ciphertext.length());
//    encoder.MessageEnd();
//    encoded.resize(encoder.MaxRetrievable());
//    encoder.Get(reinterpret_cast<byte*>(&encoded[0]), encoded.length());
//
//    return encoded;
//}
//
//string decryptAES(const string& encodedCiphertext, const string& inputKey) {
//    using namespace CryptoPP;
//
//    string ciphertext;
//    CryptoPP::Base64Decoder decoder;
//    decoder.Put(reinterpret_cast<const byte*>(encodedCiphertext.data()), encodedCiphertext.length());
//    decoder.MessageEnd();
//    ciphertext.resize(decoder.MaxRetrievable());
//    decoder.Get(reinterpret_cast<byte*>(&ciphertext[0]), ciphertext.length());
//
//    if (ciphertext.length() < 16 + 1) {
//        throw runtime_error("Invalid ciphertext length");
//    }
//
//    uint8_t iv[16];
//    memcpy(iv, ciphertext.data(), 16);
//    size_t padded_len = ciphertext.length() - 16;
//    vector<uint8_t> padded_ciphertext(padded_len);
//    memcpy(padded_ciphertext.data(), ciphertext.data() + 16, padded_len);
//
//    uint8_t key[16] = { 0 };
//    size_t keyLen = inputKey.length() > 16 ? 16 : inputKey.length();
//    memcpy(key, inputKey.c_str(), keyLen);
//
//    AES_ctx ctx;
//    AES_init_ctx_iv(&ctx, key, iv);
//    AES_CBC_decrypt_buffer(&ctx, padded_ciphertext.data(), padded_len);
//
//    if (padded_len > 0) {
//        uint8_t unpadding_value = padded_ciphertext.back();
//        if (unpadding_value > 0 && unpadding_value <= 16 && padded_len >= unpadding_value) {
//            padded_ciphertext.resize(padded_len - unpadding_value);
//        }
//        else if (unpadding_value > padded_len) {
//            throw runtime_error("Invalid padding");
//        }
//    }
//
//    return string(padded_ciphertext.begin(), padded_ciphertext.end());
//}