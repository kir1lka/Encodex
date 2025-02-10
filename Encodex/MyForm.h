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





		   System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button6;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panelAES->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelAES
			// 
			this->panelAES->Controls->Add(this->groupBox2);
			this->panelAES->Controls->Add(this->groupBox1);
			this->panelAES->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelAES->Location = System::Drawing::Point(3, 683);
			this->panelAES->Name = L"panelAES";
			this->panelAES->Size = System::Drawing::Size(954, 69);
			this->panelAES->TabIndex = 0;
			this->panelAES->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel2);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(954, 240);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Зашифровать";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(9, 18);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(939, 167);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(0, 0);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(100, 22);
			this->txtInput->TabIndex = 0;
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
			this->tabControl1->Size = System::Drawing::Size(974, 811);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(966, 782);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Симметричное";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->panelAES, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->webBrowser1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(960, 776);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Right;
			this->button1->Location = System::Drawing::Point(765, 758);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 15);
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
			this->webBrowser1->Size = System::Drawing::Size(954, 674);
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
			this->tabPage2->Size = System::Drawing::Size(966, 782);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Асимметричное";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(966, 782);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Хэш-функция";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(966, 782);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Гибридное";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 191);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(948, 46);
			this->tableLayoutPanel2->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Right;
			this->button2->Location = System::Drawing::Point(815, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 40);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Зашифровать";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(468, 40);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ключ:";
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->textBox1->Location = System::Drawing::Point(44, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Left;
			this->button3->Location = System::Drawing::Point(144, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Открыть";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel3);
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBox2->Location = System::Drawing::Point(0, 240);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(954, 240);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Расшифровать";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->button4, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->panel2, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 191);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(948, 46);
			this->tableLayoutPanel3->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Right;
			this->button4->Location = System::Drawing::Point(815, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 40);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Расшифровать";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(468, 40);
			this->panel2->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Left;
			this->button5->Location = System::Drawing::Point(144, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 40);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Открыть";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->textBox2->Location = System::Drawing::Point(44, 0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ключ:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(9, 18);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(939, 167);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Left;
			this->button6->Location = System::Drawing::Point(274, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 40);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Сохранить";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(974, 811);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Encodex";
			this->panelAES->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	



private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->webBrowser1->Visible = !this->webBrowser1->Visible;
			this->panelAES->Visible = !this->panelAES->Visible;
		}
		

};
}
