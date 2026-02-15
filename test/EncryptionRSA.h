#pragma once

#pragma once
using namespace System;
using namespace System::Text;
using namespace System::Security::Cryptography;
using namespace System::IO;

void generateRSAKeys(String^% publicKey, String^% privateKey) {
    try {
        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider(2048);
        RSAParameters p = rsa->ExportParameters(true);

        // --- сериализация публичного ключа: Modulus + Exponent с длинами
        MemoryStream^ pubStream = gcnew MemoryStream();
        BinaryWriter^ pubWriter = gcnew BinaryWriter(pubStream);
        pubWriter->Write(p.Modulus->Length);
        pubWriter->Write(p.Modulus);
        pubWriter->Write(p.Exponent->Length);
        pubWriter->Write(p.Exponent);
        pubWriter->Flush();
        publicKey = Convert::ToBase64String(pubStream->ToArray());

        // --- сериализация приватного ключа: Modulus + Exponent + D с длинами
        MemoryStream^ privStream = gcnew MemoryStream();
        BinaryWriter^ privWriter = gcnew BinaryWriter(privStream);
        privWriter->Write(p.Modulus->Length);
        privWriter->Write(p.Modulus);
        privWriter->Write(p.Exponent->Length);
        privWriter->Write(p.Exponent);
        privWriter->Write(p.D->Length);
        privWriter->Write(p.D);
        privWriter->Flush();
        privateKey = Convert::ToBase64String(privStream->ToArray());

        delete rsa;
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Ошибка при генерации ключей: " + ex->Message);
    }
}


String^ encryptRSA(String^ plaintext, String^ publicKeyBase64) {
    try {
        array<Byte>^ data = Convert::FromBase64String(publicKeyBase64);
        MemoryStream^ ms = gcnew MemoryStream(data);
        BinaryReader^ reader = gcnew BinaryReader(ms);

        RSAParameters p;
        int modLen = reader->ReadInt32();
        p.Modulus = reader->ReadBytes(modLen);
        int expLen = reader->ReadInt32();
        p.Exponent = reader->ReadBytes(expLen);

        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider();
        rsa->ImportParameters(p);

        array<Byte>^ dataToEncrypt = Encoding::UTF8->GetBytes(plaintext);
        array<Byte>^ encryptedData = rsa->Encrypt(dataToEncrypt, true);

        delete rsa;
        return Convert::ToBase64String(encryptedData);
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Ошибка при шифровании: " + ex->Message);
    }
}

String^ decryptRSA(String^ encryptedBase64, String^ privateKeyBase64) {
    try {
        array<Byte>^ data = Convert::FromBase64String(privateKeyBase64);
        MemoryStream^ ms = gcnew MemoryStream(data);
        BinaryReader^ reader = gcnew BinaryReader(ms);

        RSAParameters p;
        int modLen = reader->ReadInt32();
        p.Modulus = reader->ReadBytes(modLen);
        int expLen = reader->ReadInt32();
        p.Exponent = reader->ReadBytes(expLen);
        int dLen = reader->ReadInt32();
        p.D = reader->ReadBytes(dLen);

        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider();
        rsa->ImportParameters(p);

        array<Byte>^ encryptedBytes = Convert::FromBase64String(encryptedBase64);
        array<Byte>^ decryptedBytes = rsa->Decrypt(encryptedBytes, true);

        delete rsa;
        return Encoding::UTF8->GetString(decryptedBytes);
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Ошибка при дешифровании: " + ex->Message);
    }
}


//void generateRSAKeys(String^% publicKey, String^% privateKey) {
//    try {
//        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider(2048);
//        publicKey = rsa->ToXmlString(false); // Public key
//        privateKey = rsa->ToXmlString(true); // Private key with full parameters
//        delete rsa;
//    }
//    catch (Exception^ ex) {
//        throw gcnew Exception("Ошибка при генерации ключей: " + ex->Message);
//    }
//}
//
//String^ encryptRSA(String^ plaintext, String^ publicKeyXml) {
//    try {
//        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider();
//        rsa->FromXmlString(publicKeyXml);
//
//        array<Byte>^ dataToEncrypt = System::Text::Encoding::UTF8->GetBytes(plaintext);
//        array<Byte>^ encryptedData = rsa->Encrypt(dataToEncrypt, true);
//        delete rsa;
//        return Convert::ToBase64String(encryptedData);
//    }
//    catch (Exception^ ex) {
//        throw gcnew Exception("Ошибка при шифровании: " + ex->Message);
//    }
//}
//
//String^ decryptRSA(String^ encryptedBase64, String^ privateKeyXml) {
//    try {
//        RSACryptoServiceProvider^ rsa = gcnew RSACryptoServiceProvider();
//        rsa->FromXmlString(privateKeyXml);
//
//        array<Byte>^ encryptedBytes = Convert::FromBase64String(encryptedBase64);
//        array<Byte>^ decryptedBytes = rsa->Decrypt(encryptedBytes, true); 
//        delete rsa;
//        return System::Text::Encoding::UTF8->GetString(decryptedBytes);
//    }
//    catch (Exception^ ex) {
//        throw gcnew Exception("Ошибка при дешифровании: " + ex->Message);
//    }
//}