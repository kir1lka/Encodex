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
			this->comboBox1->SelectedIndex = 0;
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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button7;






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
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panelAES->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelAES
			// 
			this->panelAES->Controls->Add(this->tableLayoutPanel4);
			this->panelAES->Controls->Add(this->groupBox2);
			this->panelAES->Controls->Add(this->groupBox1);
			this->panelAES->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelAES->Location = System::Drawing::Point(3, 534);
			this->panelAES->Name = L"panelAES";
			this->panelAES->Size = System::Drawing::Size(1019, 53);
			this->panelAES->TabIndex = 0;
			this->panelAES->Visible = false;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->panel3, 0, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel4->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1019, 39);
			this->tableLayoutPanel4->TabIndex = 7;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1013, 33);
			this->panel3->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->ItemHeight = 20;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Потоковый - RC4", L"Блочный - AES" });
			this->comboBox1->Location = System::Drawing::Point(304, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(208, 28);
			this->comboBox1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label3->Size = System::Drawing::Size(304, 23);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Вид симметричного шифрования: ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel3);
			this->groupBox2->Controls->Add(this->richTextBox2);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(0, -187);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1019, 240);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Расшифровать";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				65.18987F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				34.81013F)));
			this->tableLayoutPanel3->Controls->Add(this->button4, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->panel2, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 202);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1013, 35);
			this->tableLayoutPanel3->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Right;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(853, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 29);
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
			this->panel2->Size = System::Drawing::Size(654, 29);
			this->panel2->TabIndex = 1;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Left;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(481, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 29);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Сохранить";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Left;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(351, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 29);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Открыть";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->textBox2->Location = System::Drawing::Point(75, 0);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(276, 29);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ключ:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Top;
			this->richTextBox2->Location = System::Drawing::Point(3, 23);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(1013, 173);
			this->richTextBox2->TabIndex = 4;
			this->richTextBox2->Text = L"";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel2);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(0, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1019, 240);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Зашифровать";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				65.08439F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				34.91561F)));
			this->tableLayoutPanel2->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 202);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1013, 35);
			this->tableLayoutPanel2->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Right;
			this->button2->Location = System::Drawing::Point(853, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 29);
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
			this->panel1->Size = System::Drawing::Size(653, 29);
			this->panel1->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Left;
			this->button3->Location = System::Drawing::Point(351, 0);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 29);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Открыть";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->textBox1->Location = System::Drawing::Point(75, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(276, 29);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ключ:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->richTextBox1->Location = System::Drawing::Point(3, 23);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1013, 176);
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
			this->tabControl1->Size = System::Drawing::Size(1039, 636);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1031, 607);
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
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1025, 601);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Right;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(830, 593);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 5);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Теория/Пользование";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(3, 3);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1019, 525);
			this->webBrowser1->TabIndex = 3;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1031, 607);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Асимметричное";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1031, 607);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Хэш-функция";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1031, 607);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Гибридное";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Right;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(853, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(160, 33);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Очистить все";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1039, 636);
			this->Controls->Add(this->tabControl1);
			this->MinimumSize = System::Drawing::Size(1000, 620);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Encodex";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelAES->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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

		System::Void LoadWebBrowserContent() {
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
		}
		

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	   LoadWebBrowserContent();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
