#pragma once

using namespace System;
using namespace System::Text;
using namespace System::Security::Cryptography;
using namespace System::IO;

void generateRSAKeys(String^% publicKey, String^% privateKey) {
    try {
        // создание объекта RSA с ключом 2048 бит
        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider(2048);
        // экспорт параметров ключа (включая приватные)
        RSAParameters p = rsa->ExportParameters(true);

        // сохранение публичного ключа Modulus, Exponent в Base64
        MemoryStream^ pubStream = gcnew MemoryStream();
        BinaryWriter^ pubWriter = gcnew BinaryWriter(pubStream);
        pubWriter->Write(p.Modulus->Length); pubWriter->Write(p.Modulus);
        pubWriter->Write(p.Exponent->Length); pubWriter->Write(p.Exponent);
        pubWriter->Flush();
        publicKey = Convert::ToBase64String(pubStream->ToArray());

        // сохранение приватного ключа в Base64
        MemoryStream^ privStream = gcnew MemoryStream();
        BinaryWriter^ privWriter = gcnew BinaryWriter(privStream);
        array<array<Byte>^>^ parts = { p.Modulus, p.Exponent, p.D, p.P, p.Q, p.DP, p.DQ, p.InverseQ };
        for each (array<Byte> ^ part in parts) {
            privWriter->Write(part->Length);
            privWriter->Write(part);
        }
        privWriter->Flush();
        privateKey = Convert::ToBase64String(privStream->ToArray());

        // очистка объекта RSA
        delete rsa;
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Ошибка при генерации ключей: " + ex->Message);
    }
}

String^ encryptRSA(String^ plaintext, String^ publicKeyBase64) {
    try {
        // декодирование публичного ключа из Base64
        array<Byte>^ data = Convert::FromBase64String(publicKeyBase64);
        MemoryStream^ ms = gcnew MemoryStream(data);
        BinaryReader^ reader = gcnew BinaryReader(ms);

        // чтение параметров публичного ключа (Modulus, Exponent)
        RSAParameters p;
        int modLen = reader->ReadInt32();
        p.Modulus = reader->ReadBytes(modLen);
        int expLen = reader->ReadInt32();
        p.Exponent = reader->ReadBytes(expLen);

        // настройка RSA с публичным ключом
        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider();
        rsa->ImportParameters(p);

        // шифрование текста
        array<Byte>^ dataToEncrypt = Encoding::UTF8->GetBytes(plaintext);
        array<Byte>^ encryptedData = rsa->Encrypt(dataToEncrypt, true);

        // очистка и возврат результата в Base64
        delete rsa;
        return Convert::ToBase64String(encryptedData);
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Ошибка при шифровании: " + ex->Message);
    }
}

String^ decryptRSA(String^ encryptedBase64, String^ privateKeyBase64) {
    try {
        // декодирование приватного ключа из Base64
        array<Byte>^ data = Convert::FromBase64String(privateKeyBase64);
        MemoryStream^ ms = gcnew MemoryStream(data);
        BinaryReader^ reader = gcnew BinaryReader(ms);

        // чтение всех параметров приватного ключа
        RSAParameters p;
        p.Modulus = reader->ReadBytes(reader->ReadInt32());
        p.Exponent = reader->ReadBytes(reader->ReadInt32());
        p.D = reader->ReadBytes(reader->ReadInt32());
        p.P = reader->ReadBytes(reader->ReadInt32());
        p.Q = reader->ReadBytes(reader->ReadInt32());
        p.DP = reader->ReadBytes(reader->ReadInt32());
        p.DQ = reader->ReadBytes(reader->ReadInt32());
        p.InverseQ = reader->ReadBytes(reader->ReadInt32());

        // настройка RSA с приватным ключом
        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider();
        rsa->ImportParameters(p);

        // дешифрование данных
        array<Byte>^ encryptedBytes = Convert::FromBase64String(encryptedBase64);
        array<Byte>^ decryptedBytes = rsa->Decrypt(encryptedBytes, true);

        // очистка и возврат результата в UTF-8
        delete rsa;
        return Encoding::UTF8->GetString(decryptedBytes);
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Ошибка при дешифровании: " + ex->Message);
    }
}





























//using namespace System;
//using namespace System::Text;
//using namespace System::Security::Cryptography;
//using namespace System::IO;
//
//void generateRSAKeys(String^% publicKey, String^% privateKey) {
//    try {
//        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider(2048);
//        RSAParameters p = rsa->ExportParameters(true);
//
//        MemoryStream^ pubStream = gcnew MemoryStream();
//        BinaryWriter^ pubWriter = gcnew BinaryWriter(pubStream);
//        pubWriter->Write(p.Modulus->Length); pubWriter->Write(p.Modulus);
//        pubWriter->Write(p.Exponent->Length); pubWriter->Write(p.Exponent);
//        pubWriter->Flush();
//        publicKey = Convert::ToBase64String(pubStream->ToArray());
//
//        MemoryStream^ privStream = gcnew MemoryStream();
//        BinaryWriter^ privWriter = gcnew BinaryWriter(privStream);
//
//        array<array<Byte>^>^ parts = {
//            p.Modulus, p.Exponent, p.D,
//            p.P, p.Q, p.DP, p.DQ, p.InverseQ
//        };
//
//        for each (array<Byte> ^ part in parts) {
//            privWriter->Write(part->Length);
//            privWriter->Write(part);
//        }
//
//        privWriter->Flush();
//        privateKey = Convert::ToBase64String(privStream->ToArray());
//
//        delete rsa;
//    }
//    catch (Exception^ ex) {
//        throw gcnew Exception("Ошибка при генерации ключей: " + ex->Message);
//    }
//}
//
//
//String^ encryptRSA(String^ plaintext, String^ publicKeyBase64) {
//    try {
//        array<Byte>^ data = Convert::FromBase64String(publicKeyBase64);
//        MemoryStream^ ms = gcnew MemoryStream(data);
//        BinaryReader^ reader = gcnew BinaryReader(ms);
//
//        RSAParameters p;
//        int modLen = reader->ReadInt32();
//        p.Modulus = reader->ReadBytes(modLen);
//        int expLen = reader->ReadInt32();
//        p.Exponent = reader->ReadBytes(expLen);
//
//        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider();
//        rsa->ImportParameters(p);
//
//        array<Byte>^ dataToEncrypt = Encoding::UTF8->GetBytes(plaintext);
//        array<Byte>^ encryptedData = rsa->Encrypt(dataToEncrypt, true);
//
//        delete rsa;
//        return Convert::ToBase64String(encryptedData);
//    }
//    catch (Exception^ ex) {
//        throw gcnew Exception("Ошибка при шифровании: " + ex->Message);
//    }
//}
//
//String^ decryptRSA(String^ encryptedBase64, String^ privateKeyBase64) {
//    try {
//        array<Byte>^ data = Convert::FromBase64String(privateKeyBase64);
//        MemoryStream^ ms = gcnew MemoryStream(data);
//        BinaryReader^ reader = gcnew BinaryReader(ms);
//
//        RSAParameters p;
//
//        p.Modulus = reader->ReadBytes(reader->ReadInt32());
//        p.Exponent = reader->ReadBytes(reader->ReadInt32());
//        p.D = reader->ReadBytes(reader->ReadInt32());
//        p.P = reader->ReadBytes(reader->ReadInt32());
//        p.Q = reader->ReadBytes(reader->ReadInt32());
//        p.DP = reader->ReadBytes(reader->ReadInt32());
//        p.DQ = reader->ReadBytes(reader->ReadInt32());
//        p.InverseQ = reader->ReadBytes(reader->ReadInt32());
//
//        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider();
//        rsa->ImportParameters(p);
//
//        array<Byte>^ encryptedBytes = Convert::FromBase64String(encryptedBase64);
//        array<Byte>^ decryptedBytes = rsa->Decrypt(encryptedBytes, true);
//
//        delete rsa;
//        return Encoding::UTF8->GetString(decryptedBytes);
//    }
//    catch (Exception^ ex) {
//        throw gcnew Exception("Ошибка при дешифровании: " + ex->Message);
//    }
//}

