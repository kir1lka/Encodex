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
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private:
		   System::Windows::Forms::Panel^ panelAES;
		   System::Windows::Forms::TextBox^ txtAESInput;
		   System::Windows::Forms::Button^ btnEncrypt;
		   System::Windows::Forms::Button^ btnDecrypt;
		   System::Windows::Forms::Button^ btnSelectFile;
		   System::Windows::Forms::Label^ lblStatus;
		   System::Windows::Forms::OpenFileDialog^ openFileDialog1;

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
			this->panelAES = (gcnew System::Windows::Forms::Panel());
			this->txtAESInput = (gcnew System::Windows::Forms::TextBox());
			this->btnEncrypt = (gcnew System::Windows::Forms::Button());
			this->btnDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnSelectFile = (gcnew System::Windows::Forms::Button());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(0, 0);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 22);
			this->txtInput->TabIndex = 0;
			// 
			// panelAES
			// 
			this->panelAES->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelAES->Visible = false;  // По умолчанию скрыта
			this->panelAES->Controls->Add(this->txtAESInput);
			this->panelAES->Controls->Add(this->btnEncrypt);
			this->panelAES->Controls->Add(this->btnDecrypt);
			this->panelAES->Controls->Add(this->btnSelectFile);
			this->panelAES->Controls->Add(this->lblStatus);
			this->tableLayoutPanel1->Controls->Add(this->panelAES, 0, 0);

			// 
			// txtAESInput
			// 
			this->txtAESInput->Location = System::Drawing::Point(20, 20);
			this->txtAESInput->Size = System::Drawing::Size(400, 22);

			// 
			// btnEncrypt
			// 
			this->btnEncrypt->Text = L"Зашифровать";
			this->btnEncrypt->Location = System::Drawing::Point(20, 60);
			this->btnEncrypt->Click += gcnew System::EventHandler(this, &MyForm::btnEncrypt_Click);

			// 
			// btnDecrypt
			// 
			this->btnDecrypt->Text = L"Расшифровать";
			this->btnDecrypt->Location = System::Drawing::Point(150, 60);
			this->btnDecrypt->Click += gcnew System::EventHandler(this, &MyForm::btnDecrypt_Click);

			// 
			// btnSelectFile
			// 
			this->btnSelectFile->Text = L"Выбрать файл";
			this->btnSelectFile->Location = System::Drawing::Point(280, 60);
			this->btnSelectFile->Click += gcnew System::EventHandler(this, &MyForm::btnSelectFile_Click);

			// 
			// lblStatus
			// 
			this->lblStatus->Text = L"Выберите файл или введите текст";
			this->lblStatus->Location = System::Drawing::Point(20, 100);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(974, 493);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(966, 464);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Симметричное";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->webBrowser1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(960, 458);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Right;
			this->button1->Location = System::Drawing::Point(765, 415);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Теория/Практика";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(3, 3);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(954, 406);
			this->webBrowser1->TabIndex = 3;
			this->webBrowser1->DocumentText =
				"<html> <body> "
				"<h2>Симметричное шифрование</h2> "
				"<p> Симметричное шифрование — это способ шифрования данных, при котором один и тот же ключ используется и для кодирования, и для восстановления информации. "
				"До 1970-х годов, когда появились первые асимметричные шифры, оно было единственным криптографическим методом. </p> "
				"<h3>Принцип работы симметричных алгоритмов</h3> "
				"<p> В целом симметричным считается любой шифр, использующий один и тот же секретный ключ для шифрования и расшифровки. </p> "
				"<p> Например, если алгоритм предполагает замену букв числами, то и у отправителя сообщения, и у его получателя должна быть одна и та же таблица соответствия букв и чисел: "
				"первый с ее помощью шифрует сообщения, а второй — расшифровывает. </p> "
				"<img src=\"https://habrastorage.org/webt/or/pn/ar/orpnarkw6jyoz-vdtqwwf7ap4vi.png\" width=\"500\" /> "
				"<h3>Виды алгоритмов симметричного шифрования</h3> "
				"<p>Алгоритмы симметричного шифрования делятся на два типа:</p> "
				"<ul> <li>Блочные</li> <li>Потоковые</li> </ul> "
				"<h4>Блочные алгоритмы</h4> "
				"<p> Блочные алгоритмы шифруют данные блоками фиксированной длины (например, 128 бит). Примеры: </p> "
				"<ul> <li>AES</li> <li>ГОСТ 28147-89</li> <li>RC5</li> <li>Blowfish</li> <li>Twofish</li> </ul> "
				"<h4>Потоковые алгоритмы</h4> "
				"<p> Потоковое шифрование работает с каждым битом данных отдельно, используя гаммирование. Примеры: </p> "
				"<ul> <li>RC4</li> <li>Salsa20</li> <li>HC-256</li> <li>WAKE</li> </ul> "
				"<h3>Достоинства и недостатки</h3> "
				"<p> Симметричные алгоритмы требуют меньше ресурсов и работают быстрее, чем асимметричные. "
				"Однако главный их недостаток — необходимость передачи ключа, что может быть небезопасно. </p> "
				"<h3>Область применения</h3> "
				"<p> Симметричное шифрование широко используется в мессенджерах, видеосвязи и защищенных транспортных протоколах, таких как TLS. </p> "
				"</body> </html>";

			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(966, 464);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Асимметричное";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(966, 464);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Хэш-функция";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(966, 464);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Гибридное";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(974, 493);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Encodex";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	



private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->webBrowser1->Visible = !this->webBrowser1->Visible;
			this->panelAES->Visible = !this->panelAES->Visible;
		}
		System::Void btnSelectFile_Click(System::Object^ sender, System::EventArgs^ e) {
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				lblStatus->Text = L"Выбран файл: " + openFileDialog1->FileName;
			}
		}
		private: System::Void btnEncrypt_Click(System::Object^ sender, System::EventArgs^ e) {
			lblStatus->Text = L"Текст зашифрован!";  
		}

		private: System::Void btnDecrypt_Click(System::Object^ sender, System::EventArgs^ e) {
			lblStatus->Text = L"Текст расшифрован!"; 
		}

};
}
