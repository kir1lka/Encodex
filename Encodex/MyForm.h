#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::TextBox^ txtInput;
		System::Windows::Forms::TextBox^ txtKey;
		System::Windows::Forms::Button^ btnEncrypt;
		System::Windows::Forms::Button^ btnDecrypt;
		System::Windows::Forms::Button^ btnCopy;
		System::Windows::Forms::Label^ lblResult;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtKey = (gcnew System::Windows::Forms::TextBox());
			this->btnEncrypt = (gcnew System::Windows::Forms::Button());
			this->btnDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnCopy = (gcnew System::Windows::Forms::Button());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(20, 20);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(250, 22);
			this->txtInput->TabIndex = 0;
			this->txtInput->Text = L"Введите текст";
			// 
			// txtKey
			// 
			this->txtKey->Location = System::Drawing::Point(20, 50);
			this->txtKey->Name = L"txtKey";
			this->txtKey->Size = System::Drawing::Size(250, 22);
			this->txtKey->TabIndex = 1;
			this->txtKey->Text = L"Введите ключ";
			// 
			// btnEncrypt
			// 
			this->btnEncrypt->Location = System::Drawing::Point(20, 80);
			this->btnEncrypt->Name = L"btnEncrypt";
			this->btnEncrypt->Size = System::Drawing::Size(120, 30);
			this->btnEncrypt->TabIndex = 2;
			this->btnEncrypt->Text = L"Зашифровать";
			this->btnEncrypt->Click += gcnew System::EventHandler(this, &MyForm::OnEncryptClick);
			// 
			// btnDecrypt
			// 
			this->btnDecrypt->Location = System::Drawing::Point(150, 80);
			this->btnDecrypt->Name = L"btnDecrypt";
			this->btnDecrypt->Size = System::Drawing::Size(120, 30);
			this->btnDecrypt->TabIndex = 3;
			this->btnDecrypt->Text = L"Расшифровать";
			this->btnDecrypt->Click += gcnew System::EventHandler(this, &MyForm::OnDecryptClick);
			// 
			// btnCopy
			// 
			this->btnCopy->Location = System::Drawing::Point(20, 120);
			this->btnCopy->Name = L"btnCopy";
			this->btnCopy->Size = System::Drawing::Size(250, 30);
			this->btnCopy->TabIndex = 4;
			this->btnCopy->Text = L"Скопировать результат";
			this->btnCopy->Click += gcnew System::EventHandler(this, &MyForm::OnCopyClick);
			// 
			// lblResult
			// 
			this->lblResult->Location = System::Drawing::Point(20, 160);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(250, 50);
			this->lblResult->TabIndex = 5;
			this->lblResult->Text = L"Результат: ";
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(287, 305);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->txtKey);
			this->Controls->Add(this->btnEncrypt);
			this->Controls->Add(this->btnDecrypt);
			this->Controls->Add(this->btnCopy);
			this->Controls->Add(this->lblResult);
			this->Name = L"MyForm";
			this->Text = L"XOR Шифрование";

			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ XOREncryptDecrypt(String^ text, String^ key) {
			if (String::IsNullOrEmpty(text) || String::IsNullOrEmpty(key))
				return L"Ошибка: Пустой текст или ключ!";

			array<unsigned char>^ textArr = System::Text::Encoding::UTF8->GetBytes(text);
			array<unsigned char>^ keyArr = System::Text::Encoding::UTF8->GetBytes(key);
			int keyLen = keyArr->Length;

			for (int i = 0; i < textArr->Length; i++) {
				textArr[i] ^= keyArr[i % keyLen];
			}

			return System::Text::Encoding::UTF8->GetString(textArr);
		}


		// Обработчик кнопки "Зашифровать"
		void OnEncryptClick(System::Object^ sender, System::EventArgs^ e) {
			String^ inputText = txtInput->Text;
			String^ key = txtKey->Text;

			if (String::IsNullOrEmpty(inputText) || String::IsNullOrEmpty(key)) {
				MessageBox::Show(L"Введите текст и ключ!", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			String^ encryptedText = XOREncryptDecrypt(inputText, key);
			lblResult->Text = L"Результат: " + encryptedText;
		}

		// Обработчик кнопки "Расшифровать"
		void OnDecryptClick(System::Object^ sender, System::EventArgs^ e) {
			String^ encryptedText = txtInput->Text;
			String^ key = txtKey->Text;

			if (String::IsNullOrEmpty(encryptedText) || String::IsNullOrEmpty(key)) {
				MessageBox::Show(L"Введите зашифрованный текст и ключ!", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			String^ decryptedText = XOREncryptDecrypt(encryptedText, key);
			lblResult->Text = L"Результат: " + decryptedText;
		}

		// Обработчик кнопки "Скопировать"
		void OnCopyClick(System::Object^ sender, System::EventArgs^ e) {
			if (!String::IsNullOrEmpty(lblResult->Text) && lblResult->Text != "Результат: ") {
				String^ textToCopy = lblResult->Text->Replace("Результат: ", "");
				Clipboard::SetText(textToCopy);
				MessageBox::Show(L"Текст скопирован!", L"Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show(L"Нет текста для копирования!", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}
