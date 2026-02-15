#pragma once

#include <msclr/marshal_cppstd.h> 
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <vector>
#include <cstring>
#include <algorithm>

#include "EncryptionAES.h" 
#include "EncryptionRSA.h" 

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	////////////////////////
	// Структуры и константы
	////////////////////////
	
	#pragma region Структуры

	struct DateTime {
		short day;
		short month;
		short year;
	};

	struct Record {
		std::string fileName;
		std::string cryptType;
		DateTime date;
		std::string text;
		std::string textRes;
		int sizeFile;
		std::string key;
	};

#pragma endregion

	std::string dbFilePath = "db.txt";

	///////////////
	// Класс формы
	///////////////

public ref class MyForm : public System::Windows::Forms::Form
{

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::ComponentModel::Container^ components;


	////////////////////////
	// Инициалзация формы
	////////////////////////

	public:
		MyForm(void)
		{
			InitializeComponent();

			comboBoxSortsTable->SelectedIndex = 0;
			/*radioButtonTypeEncryptionTable->Checked = true;
			radioButtonDescendingTable->Checked = true;*/

			openFileDialog = gcnew System::Windows::Forms::OpenFileDialog();

			updateDataGridView();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	/////////////////////////
	// Инициалзация элементов 
	/////////////////////////
	
	#pragma region контролы


	private: System::Windows::Forms::TabControl^ tabControl;
	private: System::Windows::Forms::TabPage^ tabPageOneSymmetrical;


	private: System::Windows::Forms::TabPage^ tabPageTwoAcinmetrical;
	private: System::Windows::Forms::TabPage^ tabPageThreeTable;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelMainAES;

	private: System::Windows::Forms::GroupBox^ groupBoxDecryptAES;
	private: System::Windows::Forms::GroupBox^ groupBoxEncryptAES;
	private: System::Windows::Forms::TextBox^ textKeyBoxEncryptAES;




	protected:

	protected:










	private: System::Windows::Forms::Label^ labelKeyEncryptAES;



	private: System::Windows::Forms::Button^ buttonEncryptAES;
	private: System::Windows::Forms::Button^ buttonOpenFileEncryptAES;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDopTopAES;





	private: System::Windows::Forms::Panel^ panelTopLayoutAES;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDopBottomAES;







	private: System::Windows::Forms::RichTextBox^ richTextBoxDecryptAES;




	private: System::Windows::Forms::Panel^ panelBottomLayoutAES;
	private: System::Windows::Forms::TextBox^ textBoxKeyDecryptAES;







	private: System::Windows::Forms::Button^ buttonOpenFileDecryptAES;
	private: System::Windows::Forms::Label^ labelKeyDecryptAES;



	private: System::Windows::Forms::Button^ buttonDecryptAES;
	private: System::Windows::Forms::RichTextBox^ richTextBoxEncryptAES;





	private: System::Windows::Forms::Button^ buttonClearAllTextBoxAES;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelMainRSA;

	private: System::Windows::Forms::Button^ buttonClearAllTextBoxRSA;

	private: System::Windows::Forms::GroupBox^ groupBoxDecryptRSA;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelBottomRSA;


	private: System::Windows::Forms::RichTextBox^ richTextBoxDecryptRSA;
	private: System::Windows::Forms::Panel^ panelBottomRSA;


	private: System::Windows::Forms::TextBox^ textBoxKeyDecryptRSA;

	private: System::Windows::Forms::Button^ buttonOpenFileDecryptRSA;
	private: System::Windows::Forms::Label^ labeKeyDecryptRSA;



	private: System::Windows::Forms::Button^ buttonDecryptRSA;


	private: System::Windows::Forms::GroupBox^ groupBoxEncryptRSA;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelTopRSA;


	private: System::Windows::Forms::RichTextBox^ richTextBoxEncryptRSA;
	private: System::Windows::Forms::Panel^ panelTopRSA;


	private: System::Windows::Forms::TextBox^ textBoxKeyEncryptRSA;

	private: System::Windows::Forms::Button^ buttonOpenFileEncryptRSA;

	private: System::Windows::Forms::Label^ labeKeyEncryptRSA;
	private: System::Windows::Forms::Button^ buttonEncryptRSA;





	private: System::Windows::Forms::GroupBox^ groupBoxKeyPublicRSA;
	private: System::Windows::Forms::Button^ buttonGenerateKeysRSA;



	private: System::Windows::Forms::GroupBox^ groupBoxKeyPrivateRSA;
	private: System::Windows::Forms::RichTextBox^ richTextBoxKeyPrivateRSA;


	private: System::Windows::Forms::RichTextBox^ richTextBoxKeyPublicRSA;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelMainTable;
	private: System::Windows::Forms::DataGridView^ dataGridViewTable;

	private: System::Windows::Forms::Button^ buttonReserchTable;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;












	private: System::Windows::Forms::CheckBox^ checkBoxBigFileTable;








	private: System::Windows::Forms::Button^ buttonDefoultTable;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::ComboBox^ comboBoxSortsTable;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::RadioButton^ radioButtonDescendingTable;
	private: System::Windows::Forms::RadioButton^ radioButtonAscendingTable;
	private: System::Windows::Forms::RadioButton^ radioButtonTypeEncryptionTable;
	private: System::Windows::Forms::RadioButton^ radioButtonAverageSizeFilesTable;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ textBoxInputTypeEncryptionTable;

#pragma endregion

	//////////////////////////////////
	// Сгенерированынй код конструтором
	//////////////////////////////////
	
	#pragma region Windows Form Designer generated code

	void InitializeComponent(void)
		   {
		System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		this->tabControl = (gcnew System::Windows::Forms::TabControl());
		this->tabPageOneSymmetrical = (gcnew System::Windows::Forms::TabPage());
		this->tableLayoutPanelMainAES = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->buttonClearAllTextBoxAES = (gcnew System::Windows::Forms::Button());
		this->groupBoxDecryptAES = (gcnew System::Windows::Forms::GroupBox());
		this->tableLayoutPanelDopBottomAES = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->richTextBoxDecryptAES = (gcnew System::Windows::Forms::RichTextBox());
		this->panelBottomLayoutAES = (gcnew System::Windows::Forms::Panel());
		this->textBoxKeyDecryptAES = (gcnew System::Windows::Forms::TextBox());
		this->buttonOpenFileDecryptAES = (gcnew System::Windows::Forms::Button());
		this->labelKeyDecryptAES = (gcnew System::Windows::Forms::Label());
		this->buttonDecryptAES = (gcnew System::Windows::Forms::Button());
		this->groupBoxEncryptAES = (gcnew System::Windows::Forms::GroupBox());
		this->tableLayoutPanelDopTopAES = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->richTextBoxEncryptAES = (gcnew System::Windows::Forms::RichTextBox());
		this->panelTopLayoutAES = (gcnew System::Windows::Forms::Panel());
		this->textKeyBoxEncryptAES = (gcnew System::Windows::Forms::TextBox());
		this->buttonOpenFileEncryptAES = (gcnew System::Windows::Forms::Button());
		this->labelKeyEncryptAES = (gcnew System::Windows::Forms::Label());
		this->buttonEncryptAES = (gcnew System::Windows::Forms::Button());
		this->tabPageTwoAcinmetrical = (gcnew System::Windows::Forms::TabPage());
		this->tableLayoutPanelMainRSA = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->groupBoxKeyPrivateRSA = (gcnew System::Windows::Forms::GroupBox());
		this->richTextBoxKeyPrivateRSA = (gcnew System::Windows::Forms::RichTextBox());
		this->buttonClearAllTextBoxRSA = (gcnew System::Windows::Forms::Button());
		this->groupBoxDecryptRSA = (gcnew System::Windows::Forms::GroupBox());
		this->tableLayoutPanelBottomRSA = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->richTextBoxDecryptRSA = (gcnew System::Windows::Forms::RichTextBox());
		this->panelBottomRSA = (gcnew System::Windows::Forms::Panel());
		this->textBoxKeyDecryptRSA = (gcnew System::Windows::Forms::TextBox());
		this->buttonOpenFileDecryptRSA = (gcnew System::Windows::Forms::Button());
		this->labeKeyDecryptRSA = (gcnew System::Windows::Forms::Label());
		this->buttonDecryptRSA = (gcnew System::Windows::Forms::Button());
		this->groupBoxEncryptRSA = (gcnew System::Windows::Forms::GroupBox());
		this->tableLayoutPanelTopRSA = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->richTextBoxEncryptRSA = (gcnew System::Windows::Forms::RichTextBox());
		this->panelTopRSA = (gcnew System::Windows::Forms::Panel());
		this->textBoxKeyEncryptRSA = (gcnew System::Windows::Forms::TextBox());
		this->buttonOpenFileEncryptRSA = (gcnew System::Windows::Forms::Button());
		this->labeKeyEncryptRSA = (gcnew System::Windows::Forms::Label());
		this->buttonEncryptRSA = (gcnew System::Windows::Forms::Button());
		this->groupBoxKeyPublicRSA = (gcnew System::Windows::Forms::GroupBox());
		this->richTextBoxKeyPublicRSA = (gcnew System::Windows::Forms::RichTextBox());
		this->buttonGenerateKeysRSA = (gcnew System::Windows::Forms::Button());
		this->tabPageThreeTable = (gcnew System::Windows::Forms::TabPage());
		this->tableLayoutPanelMainTable = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->dataGridViewTable = (gcnew System::Windows::Forms::DataGridView());
		this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->buttonReserchTable = (gcnew System::Windows::Forms::Button());
		this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
		this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->radioButtonTypeEncryptionTable = (gcnew System::Windows::Forms::RadioButton());
		this->radioButtonAverageSizeFilesTable = (gcnew System::Windows::Forms::RadioButton());
		this->panel3 = (gcnew System::Windows::Forms::Panel());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->textBoxInputTypeEncryptionTable = (gcnew System::Windows::Forms::TextBox());
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
		this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->comboBoxSortsTable = (gcnew System::Windows::Forms::ComboBox());
		this->radioButtonDescendingTable = (gcnew System::Windows::Forms::RadioButton());
		this->radioButtonAscendingTable = (gcnew System::Windows::Forms::RadioButton());
		this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
		this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
		this->checkBoxBigFileTable = (gcnew System::Windows::Forms::CheckBox());
		this->buttonDefoultTable = (gcnew System::Windows::Forms::Button());
		this->tabControl->SuspendLayout();
		this->tabPageOneSymmetrical->SuspendLayout();
		this->tableLayoutPanelMainAES->SuspendLayout();
		this->groupBoxDecryptAES->SuspendLayout();
		this->tableLayoutPanelDopBottomAES->SuspendLayout();
		this->panelBottomLayoutAES->SuspendLayout();
		this->groupBoxEncryptAES->SuspendLayout();
		this->tableLayoutPanelDopTopAES->SuspendLayout();
		this->panelTopLayoutAES->SuspendLayout();
		this->tabPageTwoAcinmetrical->SuspendLayout();
		this->tableLayoutPanelMainRSA->SuspendLayout();
		this->groupBoxKeyPrivateRSA->SuspendLayout();
		this->groupBoxDecryptRSA->SuspendLayout();
		this->tableLayoutPanelBottomRSA->SuspendLayout();
		this->panelBottomRSA->SuspendLayout();
		this->groupBoxEncryptRSA->SuspendLayout();
		this->tableLayoutPanelTopRSA->SuspendLayout();
		this->panelTopRSA->SuspendLayout();
		this->groupBoxKeyPublicRSA->SuspendLayout();
		this->tabPageThreeTable->SuspendLayout();
		this->tableLayoutPanelMainTable->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTable))->BeginInit();
		this->tableLayoutPanel1->SuspendLayout();
		this->panel1->SuspendLayout();
		this->groupBox1->SuspendLayout();
		this->tableLayoutPanel4->SuspendLayout();
		this->panel3->SuspendLayout();
		this->panel2->SuspendLayout();
		this->groupBox2->SuspendLayout();
		this->tableLayoutPanel2->SuspendLayout();
		this->groupBox3->SuspendLayout();
		this->tableLayoutPanel3->SuspendLayout();
		this->SuspendLayout();
		// 
		// tabControl
		// 
		this->tabControl->Controls->Add(this->tabPageOneSymmetrical);
		this->tabControl->Controls->Add(this->tabPageTwoAcinmetrical);
		this->tabControl->Controls->Add(this->tabPageThreeTable);
		this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tabControl->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->tabControl->Location = System::Drawing::Point(0, 0);
		this->tabControl->Name = L"tabControl";
		this->tabControl->SelectedIndex = 0;
		this->tabControl->Size = System::Drawing::Size(838, 495);
		this->tabControl->TabIndex = 0;
		// 
		// tabPageOneSymmetrical
		// 
		this->tabPageOneSymmetrical->Controls->Add(this->tableLayoutPanelMainAES);
		this->tabPageOneSymmetrical->Location = System::Drawing::Point(4, 25);
		this->tabPageOneSymmetrical->Name = L"tabPageOneSymmetrical";
		this->tabPageOneSymmetrical->Padding = System::Windows::Forms::Padding(3);
		this->tabPageOneSymmetrical->Size = System::Drawing::Size(830, 466);
		this->tabPageOneSymmetrical->TabIndex = 0;
		this->tabPageOneSymmetrical->Text = L"Симметричное AES ";
		this->tabPageOneSymmetrical->UseVisualStyleBackColor = true;
		// 
		// tableLayoutPanelMainAES
		// 
		this->tableLayoutPanelMainAES->ColumnCount = 1;
		this->tableLayoutPanelMainAES->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelMainAES->Controls->Add(this->buttonClearAllTextBoxAES, 0, 2);
		this->tableLayoutPanelMainAES->Controls->Add(this->groupBoxDecryptAES, 0, 1);
		this->tableLayoutPanelMainAES->Controls->Add(this->groupBoxEncryptAES, 0, 0);
		this->tableLayoutPanelMainAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanelMainAES->Location = System::Drawing::Point(3, 3);
		this->tableLayoutPanelMainAES->Name = L"tableLayoutPanelMainAES";
		this->tableLayoutPanelMainAES->RowCount = 3;
		this->tableLayoutPanelMainAES->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		this->tableLayoutPanelMainAES->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		this->tableLayoutPanelMainAES->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
			40)));
		this->tableLayoutPanelMainAES->Size = System::Drawing::Size(824, 460);
		this->tableLayoutPanelMainAES->TabIndex = 0;
		// 
		// buttonClearAllTextBoxAES
		// 
		this->buttonClearAllTextBoxAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->buttonClearAllTextBoxAES->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonClearAllTextBoxAES->Location = System::Drawing::Point(3, 423);
		this->buttonClearAllTextBoxAES->Name = L"buttonClearAllTextBoxAES";
		this->buttonClearAllTextBoxAES->Size = System::Drawing::Size(818, 34);
		this->buttonClearAllTextBoxAES->TabIndex = 5;
		this->buttonClearAllTextBoxAES->Text = L"Очистить все поля";
		this->buttonClearAllTextBoxAES->UseVisualStyleBackColor = true;
		this->buttonClearAllTextBoxAES->Click += gcnew System::EventHandler(this, &MyForm::buttonClearAllTextBoxAES_Click);
		// 
		// groupBoxDecryptAES
		// 
		this->groupBoxDecryptAES->Controls->Add(this->tableLayoutPanelDopBottomAES);
		this->groupBoxDecryptAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->groupBoxDecryptAES->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F));
		this->groupBoxDecryptAES->Location = System::Drawing::Point(3, 213);
		this->groupBoxDecryptAES->Name = L"groupBoxDecryptAES";
		this->groupBoxDecryptAES->Size = System::Drawing::Size(818, 204);
		this->groupBoxDecryptAES->TabIndex = 2;
		this->groupBoxDecryptAES->TabStop = false;
		this->groupBoxDecryptAES->Text = L"Расшифровать";
		// 
		// tableLayoutPanelDopBottomAES
		// 
		this->tableLayoutPanelDopBottomAES->ColumnCount = 1;
		this->tableLayoutPanelDopBottomAES->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelDopBottomAES->Controls->Add(this->richTextBoxDecryptAES, 0, 0);
		this->tableLayoutPanelDopBottomAES->Controls->Add(this->panelBottomLayoutAES, 0, 1);
		this->tableLayoutPanelDopBottomAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanelDopBottomAES->Location = System::Drawing::Point(3, 21);
		this->tableLayoutPanelDopBottomAES->Name = L"tableLayoutPanelDopBottomAES";
		this->tableLayoutPanelDopBottomAES->RowCount = 2;
		this->tableLayoutPanelDopBottomAES->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelDopBottomAES->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
			40)));
		this->tableLayoutPanelDopBottomAES->Size = System::Drawing::Size(812, 180);
		this->tableLayoutPanelDopBottomAES->TabIndex = 6;
		// 
		// richTextBoxDecryptAES
		// 
		this->richTextBoxDecryptAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->richTextBoxDecryptAES->Enabled = false;
		this->richTextBoxDecryptAES->Location = System::Drawing::Point(3, 3);
		this->richTextBoxDecryptAES->Name = L"richTextBoxDecryptAES";
		this->richTextBoxDecryptAES->Size = System::Drawing::Size(806, 134);
		this->richTextBoxDecryptAES->TabIndex = 0;
		this->richTextBoxDecryptAES->Text = L"";
		// 
		// panelBottomLayoutAES
		// 
		this->panelBottomLayoutAES->Controls->Add(this->textBoxKeyDecryptAES);
		this->panelBottomLayoutAES->Controls->Add(this->buttonOpenFileDecryptAES);
		this->panelBottomLayoutAES->Controls->Add(this->labelKeyDecryptAES);
		this->panelBottomLayoutAES->Controls->Add(this->buttonDecryptAES);
		this->panelBottomLayoutAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panelBottomLayoutAES->Location = System::Drawing::Point(3, 143);
		this->panelBottomLayoutAES->Name = L"panelBottomLayoutAES";
		this->panelBottomLayoutAES->Size = System::Drawing::Size(806, 34);
		this->panelBottomLayoutAES->TabIndex = 0;
		// 
		// textBoxKeyDecryptAES
		// 
		this->textBoxKeyDecryptAES->Dock = System::Windows::Forms::DockStyle::Left;
		this->textBoxKeyDecryptAES->Location = System::Drawing::Point(45, 0);
		this->textBoxKeyDecryptAES->Multiline = true;
		this->textBoxKeyDecryptAES->Name = L"textBoxKeyDecryptAES";
		this->textBoxKeyDecryptAES->Size = System::Drawing::Size(240, 34);
		this->textBoxKeyDecryptAES->TabIndex = 4;
		// 
		// buttonOpenFileDecryptAES
		// 
		this->buttonOpenFileDecryptAES->Dock = System::Windows::Forms::DockStyle::Right;
		this->buttonOpenFileDecryptAES->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonOpenFileDecryptAES->Location = System::Drawing::Point(526, 0);
		this->buttonOpenFileDecryptAES->Name = L"buttonOpenFileDecryptAES";
		this->buttonOpenFileDecryptAES->Size = System::Drawing::Size(140, 34);
		this->buttonOpenFileDecryptAES->TabIndex = 1;
		this->buttonOpenFileDecryptAES->Text = L"Открыть файл";
		this->buttonOpenFileDecryptAES->UseVisualStyleBackColor = true;
		this->buttonOpenFileDecryptAES->Click += gcnew System::EventHandler(this, &MyForm::buttonOpenFileDecryptAES_Click);
		// 
		// labelKeyDecryptAES
		// 
		this->labelKeyDecryptAES->Dock = System::Windows::Forms::DockStyle::Left;
		this->labelKeyDecryptAES->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->labelKeyDecryptAES->Location = System::Drawing::Point(0, 0);
		this->labelKeyDecryptAES->Name = L"labelKeyDecryptAES";
		this->labelKeyDecryptAES->Size = System::Drawing::Size(45, 34);
		this->labelKeyDecryptAES->TabIndex = 3;
		this->labelKeyDecryptAES->Text = L"Ключ:";
		this->labelKeyDecryptAES->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// buttonDecryptAES
		// 
		this->buttonDecryptAES->Dock = System::Windows::Forms::DockStyle::Right;
		this->buttonDecryptAES->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonDecryptAES->Location = System::Drawing::Point(666, 0);
		this->buttonDecryptAES->Name = L"buttonDecryptAES";
		this->buttonDecryptAES->Size = System::Drawing::Size(140, 34);
		this->buttonDecryptAES->TabIndex = 2;
		this->buttonDecryptAES->Text = L"Расшифровать";
		this->buttonDecryptAES->UseVisualStyleBackColor = true;
		this->buttonDecryptAES->Click += gcnew System::EventHandler(this, &MyForm::buttonDecryptAES_Click);
		// 
		// groupBoxEncryptAES
		// 
		this->groupBoxEncryptAES->Controls->Add(this->tableLayoutPanelDopTopAES);
		this->groupBoxEncryptAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->groupBoxEncryptAES->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->groupBoxEncryptAES->Location = System::Drawing::Point(3, 3);
		this->groupBoxEncryptAES->Name = L"groupBoxEncryptAES";
		this->groupBoxEncryptAES->Size = System::Drawing::Size(818, 204);
		this->groupBoxEncryptAES->TabIndex = 1;
		this->groupBoxEncryptAES->TabStop = false;
		this->groupBoxEncryptAES->Text = L"Зашифровать";
		// 
		// tableLayoutPanelDopTopAES
		// 
		this->tableLayoutPanelDopTopAES->ColumnCount = 1;
		this->tableLayoutPanelDopTopAES->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelDopTopAES->Controls->Add(this->richTextBoxEncryptAES, 0, 0);
		this->tableLayoutPanelDopTopAES->Controls->Add(this->panelTopLayoutAES, 0, 1);
		this->tableLayoutPanelDopTopAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanelDopTopAES->Location = System::Drawing::Point(3, 21);
		this->tableLayoutPanelDopTopAES->Name = L"tableLayoutPanelDopTopAES";
		this->tableLayoutPanelDopTopAES->RowCount = 2;
		this->tableLayoutPanelDopTopAES->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelDopTopAES->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
			40)));
		this->tableLayoutPanelDopTopAES->Size = System::Drawing::Size(812, 180);
		this->tableLayoutPanelDopTopAES->TabIndex = 5;
		// 
		// richTextBoxEncryptAES
		// 
		this->richTextBoxEncryptAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->richTextBoxEncryptAES->Enabled = false;
		this->richTextBoxEncryptAES->Location = System::Drawing::Point(3, 3);
		this->richTextBoxEncryptAES->Name = L"richTextBoxEncryptAES";
		this->richTextBoxEncryptAES->Size = System::Drawing::Size(806, 134);
		this->richTextBoxEncryptAES->TabIndex = 0;
		this->richTextBoxEncryptAES->Text = L"";
		// 
		// panelTopLayoutAES
		// 
		this->panelTopLayoutAES->Controls->Add(this->textKeyBoxEncryptAES);
		this->panelTopLayoutAES->Controls->Add(this->buttonOpenFileEncryptAES);
		this->panelTopLayoutAES->Controls->Add(this->labelKeyEncryptAES);
		this->panelTopLayoutAES->Controls->Add(this->buttonEncryptAES);
		this->panelTopLayoutAES->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panelTopLayoutAES->Location = System::Drawing::Point(3, 143);
		this->panelTopLayoutAES->Name = L"panelTopLayoutAES";
		this->panelTopLayoutAES->Size = System::Drawing::Size(806, 34);
		this->panelTopLayoutAES->TabIndex = 0;
		// 
		// textKeyBoxEncryptAES
		// 
		this->textKeyBoxEncryptAES->Dock = System::Windows::Forms::DockStyle::Left;
		this->textKeyBoxEncryptAES->Location = System::Drawing::Point(45, 0);
		this->textKeyBoxEncryptAES->Multiline = true;
		this->textKeyBoxEncryptAES->Name = L"textKeyBoxEncryptAES";
		this->textKeyBoxEncryptAES->Size = System::Drawing::Size(240, 34);
		this->textKeyBoxEncryptAES->TabIndex = 4;
		// 
		// buttonOpenFileEncryptAES
		// 
		this->buttonOpenFileEncryptAES->Dock = System::Windows::Forms::DockStyle::Right;
		this->buttonOpenFileEncryptAES->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonOpenFileEncryptAES->Location = System::Drawing::Point(526, 0);
		this->buttonOpenFileEncryptAES->Name = L"buttonOpenFileEncryptAES";
		this->buttonOpenFileEncryptAES->Size = System::Drawing::Size(140, 34);
		this->buttonOpenFileEncryptAES->TabIndex = 1;
		this->buttonOpenFileEncryptAES->Text = L"Открыть файл";
		this->buttonOpenFileEncryptAES->UseVisualStyleBackColor = true;
		this->buttonOpenFileEncryptAES->Click += gcnew System::EventHandler(this, &MyForm::buttonOpenFileEncryptAES_Click);
		// 
		// labelKeyEncryptAES
		// 
		this->labelKeyEncryptAES->Dock = System::Windows::Forms::DockStyle::Left;
		this->labelKeyEncryptAES->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->labelKeyEncryptAES->Location = System::Drawing::Point(0, 0);
		this->labelKeyEncryptAES->Name = L"labelKeyEncryptAES";
		this->labelKeyEncryptAES->Size = System::Drawing::Size(45, 34);
		this->labelKeyEncryptAES->TabIndex = 3;
		this->labelKeyEncryptAES->Text = L"Ключ:";
		this->labelKeyEncryptAES->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// buttonEncryptAES
		// 
		this->buttonEncryptAES->Dock = System::Windows::Forms::DockStyle::Right;
		this->buttonEncryptAES->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonEncryptAES->Location = System::Drawing::Point(666, 0);
		this->buttonEncryptAES->Name = L"buttonEncryptAES";
		this->buttonEncryptAES->Size = System::Drawing::Size(140, 34);
		this->buttonEncryptAES->TabIndex = 2;
		this->buttonEncryptAES->Text = L"Зашифровать";
		this->buttonEncryptAES->UseVisualStyleBackColor = true;
		this->buttonEncryptAES->Click += gcnew System::EventHandler(this, &MyForm::buttonEncryptAES_Click);
		// 
		// tabPageTwoAcinmetrical
		// 
		this->tabPageTwoAcinmetrical->Controls->Add(this->tableLayoutPanelMainRSA);
		this->tabPageTwoAcinmetrical->Location = System::Drawing::Point(4, 25);
		this->tabPageTwoAcinmetrical->Name = L"tabPageTwoAcinmetrical";
		this->tabPageTwoAcinmetrical->Padding = System::Windows::Forms::Padding(3);
		this->tabPageTwoAcinmetrical->Size = System::Drawing::Size(830, 466);
		this->tabPageTwoAcinmetrical->TabIndex = 1;
		this->tabPageTwoAcinmetrical->Text = L"Асимметричное RSA ";
		this->tabPageTwoAcinmetrical->UseVisualStyleBackColor = true;
		// 
		// tableLayoutPanelMainRSA
		// 
		this->tableLayoutPanelMainRSA->ColumnCount = 2;
		this->tableLayoutPanelMainRSA->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			77.77778F)));
		this->tableLayoutPanelMainRSA->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			22.22222F)));
		this->tableLayoutPanelMainRSA->Controls->Add(this->groupBoxKeyPrivateRSA, 1, 1);
		this->tableLayoutPanelMainRSA->Controls->Add(this->buttonClearAllTextBoxRSA, 0, 2);
		this->tableLayoutPanelMainRSA->Controls->Add(this->groupBoxDecryptRSA, 0, 1);
		this->tableLayoutPanelMainRSA->Controls->Add(this->groupBoxEncryptRSA, 0, 0);
		this->tableLayoutPanelMainRSA->Controls->Add(this->groupBoxKeyPublicRSA, 1, 0);
		this->tableLayoutPanelMainRSA->Controls->Add(this->buttonGenerateKeysRSA, 1, 2);
		this->tableLayoutPanelMainRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanelMainRSA->Location = System::Drawing::Point(3, 3);
		this->tableLayoutPanelMainRSA->Name = L"tableLayoutPanelMainRSA";
		this->tableLayoutPanelMainRSA->RowCount = 3;
		this->tableLayoutPanelMainRSA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		this->tableLayoutPanelMainRSA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		this->tableLayoutPanelMainRSA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
			40)));
		this->tableLayoutPanelMainRSA->Size = System::Drawing::Size(824, 460);
		this->tableLayoutPanelMainRSA->TabIndex = 1;
		// 
		// groupBoxKeyPrivateRSA
		// 
		this->groupBoxKeyPrivateRSA->Controls->Add(this->richTextBoxKeyPrivateRSA);
		this->groupBoxKeyPrivateRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->groupBoxKeyPrivateRSA->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F));
		this->groupBoxKeyPrivateRSA->Location = System::Drawing::Point(643, 213);
		this->groupBoxKeyPrivateRSA->Name = L"groupBoxKeyPrivateRSA";
		this->groupBoxKeyPrivateRSA->Size = System::Drawing::Size(178, 204);
		this->groupBoxKeyPrivateRSA->TabIndex = 7;
		this->groupBoxKeyPrivateRSA->TabStop = false;
		this->groupBoxKeyPrivateRSA->Text = L"Приватный ключ";
		// 
		// richTextBoxKeyPrivateRSA
		// 
		this->richTextBoxKeyPrivateRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->richTextBoxKeyPrivateRSA->Location = System::Drawing::Point(3, 21);
		this->richTextBoxKeyPrivateRSA->Name = L"richTextBoxKeyPrivateRSA";
		this->richTextBoxKeyPrivateRSA->Size = System::Drawing::Size(172, 180);
		this->richTextBoxKeyPrivateRSA->TabIndex = 0;
		this->richTextBoxKeyPrivateRSA->Text = L"";
		// 
		// buttonClearAllTextBoxRSA
		// 
		this->buttonClearAllTextBoxRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->buttonClearAllTextBoxRSA->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonClearAllTextBoxRSA->Location = System::Drawing::Point(3, 423);
		this->buttonClearAllTextBoxRSA->Name = L"buttonClearAllTextBoxRSA";
		this->buttonClearAllTextBoxRSA->Size = System::Drawing::Size(634, 34);
		this->buttonClearAllTextBoxRSA->TabIndex = 5;
		this->buttonClearAllTextBoxRSA->Text = L"Очистить все поля";
		this->buttonClearAllTextBoxRSA->UseVisualStyleBackColor = true;
		this->buttonClearAllTextBoxRSA->Click += gcnew System::EventHandler(this, &MyForm::buttonClearAllTextBoxRSA_Click);
		// 
		// groupBoxDecryptRSA
		// 
		this->groupBoxDecryptRSA->Controls->Add(this->tableLayoutPanelBottomRSA);
		this->groupBoxDecryptRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->groupBoxDecryptRSA->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F));
		this->groupBoxDecryptRSA->Location = System::Drawing::Point(3, 213);
		this->groupBoxDecryptRSA->Name = L"groupBoxDecryptRSA";
		this->groupBoxDecryptRSA->Size = System::Drawing::Size(634, 204);
		this->groupBoxDecryptRSA->TabIndex = 2;
		this->groupBoxDecryptRSA->TabStop = false;
		this->groupBoxDecryptRSA->Text = L"Расшифровать";
		// 
		// tableLayoutPanelBottomRSA
		// 
		this->tableLayoutPanelBottomRSA->ColumnCount = 1;
		this->tableLayoutPanelBottomRSA->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelBottomRSA->Controls->Add(this->richTextBoxDecryptRSA, 0, 0);
		this->tableLayoutPanelBottomRSA->Controls->Add(this->panelBottomRSA, 0, 1);
		this->tableLayoutPanelBottomRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanelBottomRSA->Location = System::Drawing::Point(3, 21);
		this->tableLayoutPanelBottomRSA->Name = L"tableLayoutPanelBottomRSA";
		this->tableLayoutPanelBottomRSA->RowCount = 2;
		this->tableLayoutPanelBottomRSA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelBottomRSA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
			40)));
		this->tableLayoutPanelBottomRSA->Size = System::Drawing::Size(628, 180);
		this->tableLayoutPanelBottomRSA->TabIndex = 6;
		// 
		// richTextBoxDecryptRSA
		// 
		this->richTextBoxDecryptRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->richTextBoxDecryptRSA->Enabled = false;
		this->richTextBoxDecryptRSA->Location = System::Drawing::Point(3, 3);
		this->richTextBoxDecryptRSA->Name = L"richTextBoxDecryptRSA";
		this->richTextBoxDecryptRSA->Size = System::Drawing::Size(622, 134);
		this->richTextBoxDecryptRSA->TabIndex = 0;
		this->richTextBoxDecryptRSA->Text = L"";
		// 
		// panelBottomRSA
		// 
		this->panelBottomRSA->Controls->Add(this->textBoxKeyDecryptRSA);
		this->panelBottomRSA->Controls->Add(this->buttonOpenFileDecryptRSA);
		this->panelBottomRSA->Controls->Add(this->labeKeyDecryptRSA);
		this->panelBottomRSA->Controls->Add(this->buttonDecryptRSA);
		this->panelBottomRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panelBottomRSA->Location = System::Drawing::Point(3, 143);
		this->panelBottomRSA->Name = L"panelBottomRSA";
		this->panelBottomRSA->Size = System::Drawing::Size(622, 34);
		this->panelBottomRSA->TabIndex = 0;
		// 
		// textBoxKeyDecryptRSA
		// 
		this->textBoxKeyDecryptRSA->Dock = System::Windows::Forms::DockStyle::Left;
		this->textBoxKeyDecryptRSA->Location = System::Drawing::Point(45, 0);
		this->textBoxKeyDecryptRSA->Multiline = true;
		this->textBoxKeyDecryptRSA->Name = L"textBoxKeyDecryptRSA";
		this->textBoxKeyDecryptRSA->Size = System::Drawing::Size(240, 34);
		this->textBoxKeyDecryptRSA->TabIndex = 4;
		// 
		// buttonOpenFileDecryptRSA
		// 
		this->buttonOpenFileDecryptRSA->Dock = System::Windows::Forms::DockStyle::Right;
		this->buttonOpenFileDecryptRSA->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonOpenFileDecryptRSA->Location = System::Drawing::Point(342, 0);
		this->buttonOpenFileDecryptRSA->Name = L"buttonOpenFileDecryptRSA";
		this->buttonOpenFileDecryptRSA->Size = System::Drawing::Size(140, 34);
		this->buttonOpenFileDecryptRSA->TabIndex = 1;
		this->buttonOpenFileDecryptRSA->Text = L"Открыть файл";
		this->buttonOpenFileDecryptRSA->UseVisualStyleBackColor = true;
		this->buttonOpenFileDecryptRSA->Click += gcnew System::EventHandler(this, &MyForm::buttonOpenFileDecryptRSA_Click);
		// 
		// labeKeyDecryptRSA
		// 
		this->labeKeyDecryptRSA->Dock = System::Windows::Forms::DockStyle::Left;
		this->labeKeyDecryptRSA->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->labeKeyDecryptRSA->Location = System::Drawing::Point(0, 0);
		this->labeKeyDecryptRSA->Name = L"labeKeyDecryptRSA";
		this->labeKeyDecryptRSA->Size = System::Drawing::Size(45, 34);
		this->labeKeyDecryptRSA->TabIndex = 3;
		this->labeKeyDecryptRSA->Text = L"Ключ:";
		this->labeKeyDecryptRSA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// buttonDecryptRSA
		// 
		this->buttonDecryptRSA->Dock = System::Windows::Forms::DockStyle::Right;
		this->buttonDecryptRSA->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonDecryptRSA->Location = System::Drawing::Point(482, 0);
		this->buttonDecryptRSA->Name = L"buttonDecryptRSA";
		this->buttonDecryptRSA->Size = System::Drawing::Size(140, 34);
		this->buttonDecryptRSA->TabIndex = 2;
		this->buttonDecryptRSA->Text = L"Расшифровать";
		this->buttonDecryptRSA->UseVisualStyleBackColor = true;
		this->buttonDecryptRSA->Click += gcnew System::EventHandler(this, &MyForm::buttonDecryptRSA_Click);
		// 
		// groupBoxEncryptRSA
		// 
		this->groupBoxEncryptRSA->Controls->Add(this->tableLayoutPanelTopRSA);
		this->groupBoxEncryptRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->groupBoxEncryptRSA->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->groupBoxEncryptRSA->Location = System::Drawing::Point(3, 3);
		this->groupBoxEncryptRSA->Name = L"groupBoxEncryptRSA";
		this->groupBoxEncryptRSA->Size = System::Drawing::Size(634, 204);
		this->groupBoxEncryptRSA->TabIndex = 1;
		this->groupBoxEncryptRSA->TabStop = false;
		this->groupBoxEncryptRSA->Text = L"Зашифровать";
		// 
		// tableLayoutPanelTopRSA
		// 
		this->tableLayoutPanelTopRSA->ColumnCount = 1;
		this->tableLayoutPanelTopRSA->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelTopRSA->Controls->Add(this->richTextBoxEncryptRSA, 0, 0);
		this->tableLayoutPanelTopRSA->Controls->Add(this->panelTopRSA, 0, 1);
		this->tableLayoutPanelTopRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanelTopRSA->Location = System::Drawing::Point(3, 21);
		this->tableLayoutPanelTopRSA->Name = L"tableLayoutPanelTopRSA";
		this->tableLayoutPanelTopRSA->RowCount = 2;
		this->tableLayoutPanelTopRSA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelTopRSA->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
			40)));
		this->tableLayoutPanelTopRSA->Size = System::Drawing::Size(628, 180);
		this->tableLayoutPanelTopRSA->TabIndex = 5;
		// 
		// richTextBoxEncryptRSA
		// 
		this->richTextBoxEncryptRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->richTextBoxEncryptRSA->Enabled = false;
		this->richTextBoxEncryptRSA->Location = System::Drawing::Point(3, 3);
		this->richTextBoxEncryptRSA->Name = L"richTextBoxEncryptRSA";
		this->richTextBoxEncryptRSA->Size = System::Drawing::Size(622, 134);
		this->richTextBoxEncryptRSA->TabIndex = 0;
		this->richTextBoxEncryptRSA->Text = L"";
		// 
		// panelTopRSA
		// 
		this->panelTopRSA->Controls->Add(this->textBoxKeyEncryptRSA);
		this->panelTopRSA->Controls->Add(this->buttonOpenFileEncryptRSA);
		this->panelTopRSA->Controls->Add(this->labeKeyEncryptRSA);
		this->panelTopRSA->Controls->Add(this->buttonEncryptRSA);
		this->panelTopRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panelTopRSA->Location = System::Drawing::Point(3, 143);
		this->panelTopRSA->Name = L"panelTopRSA";
		this->panelTopRSA->Size = System::Drawing::Size(622, 34);
		this->panelTopRSA->TabIndex = 0;
		// 
		// textBoxKeyEncryptRSA
		// 
		this->textBoxKeyEncryptRSA->Dock = System::Windows::Forms::DockStyle::Left;
		this->textBoxKeyEncryptRSA->Location = System::Drawing::Point(45, 0);
		this->textBoxKeyEncryptRSA->Multiline = true;
		this->textBoxKeyEncryptRSA->Name = L"textBoxKeyEncryptRSA";
		this->textBoxKeyEncryptRSA->Size = System::Drawing::Size(240, 34);
		this->textBoxKeyEncryptRSA->TabIndex = 4;
		// 
		// buttonOpenFileEncryptRSA
		// 
		this->buttonOpenFileEncryptRSA->BackColor = System::Drawing::Color::Transparent;
		this->buttonOpenFileEncryptRSA->Dock = System::Windows::Forms::DockStyle::Right;
		this->buttonOpenFileEncryptRSA->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonOpenFileEncryptRSA->Location = System::Drawing::Point(342, 0);
		this->buttonOpenFileEncryptRSA->Name = L"buttonOpenFileEncryptRSA";
		this->buttonOpenFileEncryptRSA->Size = System::Drawing::Size(140, 34);
		this->buttonOpenFileEncryptRSA->TabIndex = 1;
		this->buttonOpenFileEncryptRSA->Text = L"Открыть файл";
		this->buttonOpenFileEncryptRSA->UseVisualStyleBackColor = false;
		this->buttonOpenFileEncryptRSA->Click += gcnew System::EventHandler(this, &MyForm::buttonOpenFileEncryptRSA_Click);
		// 
		// labeKeyEncryptRSA
		// 
		this->labeKeyEncryptRSA->Dock = System::Windows::Forms::DockStyle::Left;
		this->labeKeyEncryptRSA->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->labeKeyEncryptRSA->Location = System::Drawing::Point(0, 0);
		this->labeKeyEncryptRSA->Name = L"labeKeyEncryptRSA";
		this->labeKeyEncryptRSA->Size = System::Drawing::Size(45, 34);
		this->labeKeyEncryptRSA->TabIndex = 3;
		this->labeKeyEncryptRSA->Text = L"Ключ:";
		this->labeKeyEncryptRSA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		// 
		// buttonEncryptRSA
		// 
		this->buttonEncryptRSA->Dock = System::Windows::Forms::DockStyle::Right;
		this->buttonEncryptRSA->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		this->buttonEncryptRSA->Location = System::Drawing::Point(482, 0);
		this->buttonEncryptRSA->Name = L"buttonEncryptRSA";
		this->buttonEncryptRSA->Size = System::Drawing::Size(140, 34);
		this->buttonEncryptRSA->TabIndex = 2;
		this->buttonEncryptRSA->Text = L"Зашифровать";
		this->buttonEncryptRSA->UseVisualStyleBackColor = true;
		this->buttonEncryptRSA->Click += gcnew System::EventHandler(this, &MyForm::buttonEncryptRSA_Click);
		// 
		// groupBoxKeyPublicRSA
		// 
		this->groupBoxKeyPublicRSA->Controls->Add(this->richTextBoxKeyPublicRSA);
		this->groupBoxKeyPublicRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->groupBoxKeyPublicRSA->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F));
		this->groupBoxKeyPublicRSA->Location = System::Drawing::Point(643, 3);
		this->groupBoxKeyPublicRSA->Name = L"groupBoxKeyPublicRSA";
		this->groupBoxKeyPublicRSA->Size = System::Drawing::Size(178, 204);
		this->groupBoxKeyPublicRSA->TabIndex = 6;
		this->groupBoxKeyPublicRSA->TabStop = false;
		this->groupBoxKeyPublicRSA->Text = L"Публичный ключ";
		// 
		// richTextBoxKeyPublicRSA
		// 
		this->richTextBoxKeyPublicRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->richTextBoxKeyPublicRSA->Location = System::Drawing::Point(3, 21);
		this->richTextBoxKeyPublicRSA->Name = L"richTextBoxKeyPublicRSA";
		this->richTextBoxKeyPublicRSA->Size = System::Drawing::Size(172, 180);
		this->richTextBoxKeyPublicRSA->TabIndex = 0;
		this->richTextBoxKeyPublicRSA->Text = L"";
		// 
		// buttonGenerateKeysRSA
		// 
		this->buttonGenerateKeysRSA->Dock = System::Windows::Forms::DockStyle::Fill;
		this->buttonGenerateKeysRSA->Location = System::Drawing::Point(643, 423);
		this->buttonGenerateKeysRSA->Name = L"buttonGenerateKeysRSA";
		this->buttonGenerateKeysRSA->Size = System::Drawing::Size(178, 34);
		this->buttonGenerateKeysRSA->TabIndex = 7;
		this->buttonGenerateKeysRSA->Text = L"Генерация ключей";
		this->buttonGenerateKeysRSA->UseVisualStyleBackColor = true;
		this->buttonGenerateKeysRSA->Click += gcnew System::EventHandler(this, &MyForm::buttonGenerateKeysRSA_Click);
		// 
		// tabPageThreeTable
		// 
		this->tabPageThreeTable->Controls->Add(this->tableLayoutPanelMainTable);
		this->tabPageThreeTable->Location = System::Drawing::Point(4, 25);
		this->tabPageThreeTable->Name = L"tabPageThreeTable";
		this->tabPageThreeTable->Size = System::Drawing::Size(830, 466);
		this->tabPageThreeTable->TabIndex = 2;
		this->tabPageThreeTable->Text = L"Таблица записей";
		this->tabPageThreeTable->UseVisualStyleBackColor = true;
		// 
		// tableLayoutPanelMainTable
		// 
		this->tableLayoutPanelMainTable->ColumnCount = 1;
		this->tableLayoutPanelMainTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanelMainTable->Controls->Add(this->dataGridViewTable, 0, 1);
		this->tableLayoutPanelMainTable->Controls->Add(this->buttonReserchTable, 0, 2);
		this->tableLayoutPanelMainTable->Controls->Add(this->tableLayoutPanel1, 0, 0);
		this->tableLayoutPanelMainTable->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanelMainTable->Location = System::Drawing::Point(0, 0);
		this->tableLayoutPanelMainTable->Margin = System::Windows::Forms::Padding(2);
		this->tableLayoutPanelMainTable->Name = L"tableLayoutPanelMainTable";
		this->tableLayoutPanelMainTable->RowCount = 3;
		this->tableLayoutPanelMainTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			40)));
		this->tableLayoutPanelMainTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
			60)));
		this->tableLayoutPanelMainTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
			32)));
		this->tableLayoutPanelMainTable->Size = System::Drawing::Size(830, 466);
		this->tableLayoutPanelMainTable->TabIndex = 0;
		// 
		// dataGridViewTable
		// 
		this->dataGridViewTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
		dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
		dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->dataGridViewTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
		this->dataGridViewTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->dataGridViewTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
			this->Column1,
				this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
		});
		dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
		dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
		dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Arial", 10));
		dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
		dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
		dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
		dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->dataGridViewTable->DefaultCellStyle = dataGridViewCellStyle4;
		this->dataGridViewTable->Dock = System::Windows::Forms::DockStyle::Fill;
		this->dataGridViewTable->Location = System::Drawing::Point(2, 175);
		this->dataGridViewTable->Margin = System::Windows::Forms::Padding(2);
		this->dataGridViewTable->Name = L"dataGridViewTable";
		this->dataGridViewTable->RowHeadersWidth = 51;
		this->dataGridViewTable->Size = System::Drawing::Size(826, 256);
		this->dataGridViewTable->TabIndex = 0;
		// 
		// Column1
		// 
		this->Column1->HeaderText = L"Название файла";
		this->Column1->MinimumWidth = 6;
		this->Column1->Name = L"Column1";
		// 
		// Column2
		// 
		this->Column2->HeaderText = L"Размер файла (байт)";
		this->Column2->MinimumWidth = 6;
		this->Column2->Name = L"Column2";
		// 
		// Column3
		// 
		this->Column3->HeaderText = L"Вид шифрования";
		this->Column3->MinimumWidth = 6;
		this->Column3->Name = L"Column3";
		// 
		// Column4
		// 
		this->Column4->HeaderText = L"Дата шифрования";
		this->Column4->MinimumWidth = 6;
		this->Column4->Name = L"Column4";
		// 
		// Column5
		// 
		this->Column5->HeaderText = L"Содержимое файла";
		this->Column5->MinimumWidth = 6;
		this->Column5->Name = L"Column5";
		// 
		// Column6
		// 
		this->Column6->HeaderText = L"Результат ";
		this->Column6->MinimumWidth = 6;
		this->Column6->Name = L"Column6";
		// 
		// Column7
		// 
		this->Column7->HeaderText = L"Ключ";
		this->Column7->MinimumWidth = 6;
		this->Column7->Name = L"Column7";
		// 
		// buttonReserchTable
		// 
		this->buttonReserchTable->Dock = System::Windows::Forms::DockStyle::Fill;
		this->buttonReserchTable->Location = System::Drawing::Point(2, 435);
		this->buttonReserchTable->Margin = System::Windows::Forms::Padding(2);
		this->buttonReserchTable->Name = L"buttonReserchTable";
		this->buttonReserchTable->Size = System::Drawing::Size(826, 29);
		this->buttonReserchTable->TabIndex = 1;
		this->buttonReserchTable->Text = L"Выполнить поиск";
		this->buttonReserchTable->UseVisualStyleBackColor = true;
		this->buttonReserchTable->Click += gcnew System::EventHandler(this, &MyForm::buttonReserchTable_Click);
		// 
		// tableLayoutPanel1
		// 
		this->tableLayoutPanel1->ColumnCount = 3;
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			33.33333F)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			33.33333F)));
		this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			33.33333F)));
		this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 0);
		this->tableLayoutPanel1->Controls->Add(this->panel2, 1, 0);
		this->tableLayoutPanel1->Controls->Add(this->groupBox3, 2, 0);
		this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanel1->Location = System::Drawing::Point(2, 2);
		this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
		this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
		this->tableLayoutPanel1->RowCount = 1;
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
		this->tableLayoutPanel1->Size = System::Drawing::Size(826, 169);
		this->tableLayoutPanel1->TabIndex = 2;
		// 
		// panel1
		// 
		this->panel1->Controls->Add(this->groupBox1);
		this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panel1->Location = System::Drawing::Point(2, 2);
		this->panel1->Margin = System::Windows::Forms::Padding(2);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(271, 165);
		this->panel1->TabIndex = 2;
		// 
		// groupBox1
		// 
		this->groupBox1->Controls->Add(this->tableLayoutPanel4);
		this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
		this->groupBox1->Location = System::Drawing::Point(0, 0);
		this->groupBox1->Margin = System::Windows::Forms::Padding(2);
		this->groupBox1->Name = L"groupBox1";
		this->groupBox1->Padding = System::Windows::Forms::Padding(2);
		this->groupBox1->Size = System::Drawing::Size(271, 165);
		this->groupBox1->TabIndex = 0;
		this->groupBox1->TabStop = false;
		this->groupBox1->Text = L"Фильтрация";
		// 
		// tableLayoutPanel4
		// 
		this->tableLayoutPanel4->ColumnCount = 1;
		this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanel4->Controls->Add(this->radioButtonTypeEncryptionTable, 0, 0);
		this->tableLayoutPanel4->Controls->Add(this->radioButtonAverageSizeFilesTable, 0, 2);
		this->tableLayoutPanel4->Controls->Add(this->panel3, 0, 1);
		this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanel4->Location = System::Drawing::Point(2, 18);
		this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(2);
		this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
		this->tableLayoutPanel4->RowCount = 3;
		this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanel4->Size = System::Drawing::Size(267, 145);
		this->tableLayoutPanel4->TabIndex = 3;
		// 
		// radioButtonTypeEncryptionTable
		// 
		this->radioButtonTypeEncryptionTable->AutoSize = true;
		this->radioButtonTypeEncryptionTable->Dock = System::Windows::Forms::DockStyle::Fill;
		this->radioButtonTypeEncryptionTable->Location = System::Drawing::Point(2, 2);
		this->radioButtonTypeEncryptionTable->Margin = System::Windows::Forms::Padding(2);
		this->radioButtonTypeEncryptionTable->Name = L"radioButtonTypeEncryptionTable";
		this->radioButtonTypeEncryptionTable->Size = System::Drawing::Size(263, 44);
		this->radioButtonTypeEncryptionTable->TabIndex = 3;
		this->radioButtonTypeEncryptionTable->TabStop = true;
		this->radioButtonTypeEncryptionTable->Text = L"По типу шифрования";
		this->radioButtonTypeEncryptionTable->UseVisualStyleBackColor = true;
		this->radioButtonTypeEncryptionTable->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonTypeEncryptionTable_CheckedChanged);
		// 
		// radioButtonAverageSizeFilesTable
		// 
		this->radioButtonAverageSizeFilesTable->AutoSize = true;
		this->radioButtonAverageSizeFilesTable->Dock = System::Windows::Forms::DockStyle::Fill;
		this->radioButtonAverageSizeFilesTable->Location = System::Drawing::Point(2, 98);
		this->radioButtonAverageSizeFilesTable->Margin = System::Windows::Forms::Padding(2);
		this->radioButtonAverageSizeFilesTable->Name = L"radioButtonAverageSizeFilesTable";
		this->radioButtonAverageSizeFilesTable->Size = System::Drawing::Size(263, 45);
		this->radioButtonAverageSizeFilesTable->TabIndex = 4;
		this->radioButtonAverageSizeFilesTable->TabStop = true;
		this->radioButtonAverageSizeFilesTable->Text = L"По среднему значению файлов";
		this->radioButtonAverageSizeFilesTable->UseVisualStyleBackColor = true;
		this->radioButtonAverageSizeFilesTable->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonAverageSizeFilesTable_CheckedChanged);
		// 
		// panel3
		// 
		this->panel3->Controls->Add(this->label1);
		this->panel3->Controls->Add(this->textBoxInputTypeEncryptionTable);
		this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panel3->Location = System::Drawing::Point(2, 50);
		this->panel3->Margin = System::Windows::Forms::Padding(2);
		this->panel3->Name = L"panel3";
		this->panel3->Size = System::Drawing::Size(263, 44);
		this->panel3->TabIndex = 5;
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Dock = System::Windows::Forms::DockStyle::Top;
		this->label1->Enabled = false;
		this->label1->Location = System::Drawing::Point(0, 0);
		this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(178, 16);
		this->label1->TabIndex = 1;
		this->label1->Text = L"Введите тип шифрования";
		// 
		// textBoxInputTypeEncryptionTable
		// 
		this->textBoxInputTypeEncryptionTable->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->textBoxInputTypeEncryptionTable->Enabled = false;
		this->textBoxInputTypeEncryptionTable->Location = System::Drawing::Point(0, 21);
		this->textBoxInputTypeEncryptionTable->Margin = System::Windows::Forms::Padding(2);
		this->textBoxInputTypeEncryptionTable->Name = L"textBoxInputTypeEncryptionTable";
		this->textBoxInputTypeEncryptionTable->Size = System::Drawing::Size(263, 23);
		this->textBoxInputTypeEncryptionTable->TabIndex = 0;
		this->textBoxInputTypeEncryptionTable->Text = L"AES";
		// 
		// panel2
		// 
		this->panel2->Controls->Add(this->groupBox2);
		this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
		this->panel2->Location = System::Drawing::Point(277, 2);
		this->panel2->Margin = System::Windows::Forms::Padding(2);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(271, 165);
		this->panel2->TabIndex = 3;
		// 
		// groupBox2
		// 
		this->groupBox2->Controls->Add(this->tableLayoutPanel2);
		this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
		this->groupBox2->Location = System::Drawing::Point(0, 0);
		this->groupBox2->Margin = System::Windows::Forms::Padding(2);
		this->groupBox2->Name = L"groupBox2";
		this->groupBox2->Padding = System::Windows::Forms::Padding(2);
		this->groupBox2->Size = System::Drawing::Size(271, 165);
		this->groupBox2->TabIndex = 1;
		this->groupBox2->TabStop = false;
		this->groupBox2->Text = L"Сортировка";
		// 
		// tableLayoutPanel2
		// 
		this->tableLayoutPanel2->ColumnCount = 1;
		this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			100)));
		this->tableLayoutPanel2->Controls->Add(this->comboBoxSortsTable, 0, 0);
		this->tableLayoutPanel2->Controls->Add(this->radioButtonDescendingTable, 0, 1);
		this->tableLayoutPanel2->Controls->Add(this->radioButtonAscendingTable, 0, 2);
		this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanel2->Location = System::Drawing::Point(2, 18);
		this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
		this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
		this->tableLayoutPanel2->RowCount = 3;
		this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
		this->tableLayoutPanel2->Size = System::Drawing::Size(267, 145);
		this->tableLayoutPanel2->TabIndex = 5;
		// 
		// comboBoxSortsTable
		// 
		this->comboBoxSortsTable->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->comboBoxSortsTable->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->comboBoxSortsTable->FormattingEnabled = true;
		this->comboBoxSortsTable->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"По дате", L"По названию" });
		this->comboBoxSortsTable->Location = System::Drawing::Point(2, 22);
		this->comboBoxSortsTable->Margin = System::Windows::Forms::Padding(2);
		this->comboBoxSortsTable->Name = L"comboBoxSortsTable";
		this->comboBoxSortsTable->Size = System::Drawing::Size(263, 24);
		this->comboBoxSortsTable->TabIndex = 4;
		// 
		// radioButtonDescendingTable
		// 
		this->radioButtonDescendingTable->AutoSize = true;
		this->radioButtonDescendingTable->Dock = System::Windows::Forms::DockStyle::Fill;
		this->radioButtonDescendingTable->Location = System::Drawing::Point(2, 50);
		this->radioButtonDescendingTable->Margin = System::Windows::Forms::Padding(2);
		this->radioButtonDescendingTable->Name = L"radioButtonDescendingTable";
		this->radioButtonDescendingTable->Size = System::Drawing::Size(263, 44);
		this->radioButtonDescendingTable->TabIndex = 5;
		this->radioButtonDescendingTable->TabStop = true;
		this->radioButtonDescendingTable->Text = L"По убыванию";
		this->radioButtonDescendingTable->UseVisualStyleBackColor = true;
		// 
		// radioButtonAscendingTable
		// 
		this->radioButtonAscendingTable->AutoSize = true;
		this->radioButtonAscendingTable->Dock = System::Windows::Forms::DockStyle::Fill;
		this->radioButtonAscendingTable->Location = System::Drawing::Point(2, 98);
		this->radioButtonAscendingTable->Margin = System::Windows::Forms::Padding(2);
		this->radioButtonAscendingTable->Name = L"radioButtonAscendingTable";
		this->radioButtonAscendingTable->Size = System::Drawing::Size(263, 45);
		this->radioButtonAscendingTable->TabIndex = 6;
		this->radioButtonAscendingTable->TabStop = true;
		this->radioButtonAscendingTable->Text = L"По возрастанию";
		this->radioButtonAscendingTable->UseVisualStyleBackColor = true;
		// 
		// groupBox3
		// 
		this->groupBox3->Controls->Add(this->tableLayoutPanel3);
		this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
		this->groupBox3->Location = System::Drawing::Point(552, 2);
		this->groupBox3->Margin = System::Windows::Forms::Padding(2);
		this->groupBox3->Name = L"groupBox3";
		this->groupBox3->Padding = System::Windows::Forms::Padding(2);
		this->groupBox3->Size = System::Drawing::Size(272, 165);
		this->groupBox3->TabIndex = 4;
		this->groupBox3->TabStop = false;
		this->groupBox3->Text = L"Дополнительные функции";
		// 
		// tableLayoutPanel3
		// 
		this->tableLayoutPanel3->ColumnCount = 1;
		this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		this->tableLayoutPanel3->Controls->Add(this->checkBoxBigFileTable, 0, 0);
		this->tableLayoutPanel3->Controls->Add(this->buttonDefoultTable, 0, 1);
		this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanel3->Location = System::Drawing::Point(2, 18);
		this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(2);
		this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
		this->tableLayoutPanel3->RowCount = 2;
		this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
		this->tableLayoutPanel3->Size = System::Drawing::Size(268, 145);
		this->tableLayoutPanel3->TabIndex = 6;
		// 
		// checkBoxBigFileTable
		// 
		this->checkBoxBigFileTable->AutoSize = true;
		this->checkBoxBigFileTable->Dock = System::Windows::Forms::DockStyle::Fill;
		this->checkBoxBigFileTable->Location = System::Drawing::Point(2, 2);
		this->checkBoxBigFileTable->Margin = System::Windows::Forms::Padding(2);
		this->checkBoxBigFileTable->Name = L"checkBoxBigFileTable";
		this->checkBoxBigFileTable->Size = System::Drawing::Size(264, 68);
		this->checkBoxBigFileTable->TabIndex = 4;
		this->checkBoxBigFileTable->Text = L"Найти самый большой файл";
		this->checkBoxBigFileTable->UseVisualStyleBackColor = true;
		// 
		// buttonDefoultTable
		// 
		this->buttonDefoultTable->Dock = System::Windows::Forms::DockStyle::Top;
		this->buttonDefoultTable->Location = System::Drawing::Point(2, 74);
		this->buttonDefoultTable->Margin = System::Windows::Forms::Padding(2);
		this->buttonDefoultTable->Name = L"buttonDefoultTable";
		this->buttonDefoultTable->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->buttonDefoultTable->Size = System::Drawing::Size(264, 24);
		this->buttonDefoultTable->TabIndex = 5;
		this->buttonDefoultTable->Text = L"Настройки по умолчанию";
		this->buttonDefoultTable->UseVisualStyleBackColor = true;
		this->buttonDefoultTable->Click += gcnew System::EventHandler(this, &MyForm::buttonDefoultTable_Click);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(838, 495);
		this->Controls->Add(this->tabControl);
		this->MinimumSize = System::Drawing::Size(854, 534);
		this->Name = L"MyForm";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"Шифрования данных в файлах средствами С++";
		this->tabControl->ResumeLayout(false);
		this->tabPageOneSymmetrical->ResumeLayout(false);
		this->tableLayoutPanelMainAES->ResumeLayout(false);
		this->groupBoxDecryptAES->ResumeLayout(false);
		this->tableLayoutPanelDopBottomAES->ResumeLayout(false);
		this->panelBottomLayoutAES->ResumeLayout(false);
		this->panelBottomLayoutAES->PerformLayout();
		this->groupBoxEncryptAES->ResumeLayout(false);
		this->tableLayoutPanelDopTopAES->ResumeLayout(false);
		this->panelTopLayoutAES->ResumeLayout(false);
		this->panelTopLayoutAES->PerformLayout();
		this->tabPageTwoAcinmetrical->ResumeLayout(false);
		this->tableLayoutPanelMainRSA->ResumeLayout(false);
		this->groupBoxKeyPrivateRSA->ResumeLayout(false);
		this->groupBoxDecryptRSA->ResumeLayout(false);
		this->tableLayoutPanelBottomRSA->ResumeLayout(false);
		this->panelBottomRSA->ResumeLayout(false);
		this->panelBottomRSA->PerformLayout();
		this->groupBoxEncryptRSA->ResumeLayout(false);
		this->tableLayoutPanelTopRSA->ResumeLayout(false);
		this->panelTopRSA->ResumeLayout(false);
		this->panelTopRSA->PerformLayout();
		this->groupBoxKeyPublicRSA->ResumeLayout(false);
		this->tabPageThreeTable->ResumeLayout(false);
		this->tableLayoutPanelMainTable->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTable))->EndInit();
		this->tableLayoutPanel1->ResumeLayout(false);
		this->panel1->ResumeLayout(false);
		this->groupBox1->ResumeLayout(false);
		this->tableLayoutPanel4->ResumeLayout(false);
		this->tableLayoutPanel4->PerformLayout();
		this->panel3->ResumeLayout(false);
		this->panel3->PerformLayout();
		this->panel2->ResumeLayout(false);
		this->groupBox2->ResumeLayout(false);
		this->tableLayoutPanel2->ResumeLayout(false);
		this->tableLayoutPanel2->PerformLayout();
		this->groupBox3->ResumeLayout(false);
		this->tableLayoutPanel3->ResumeLayout(false);
		this->tableLayoutPanel3->PerformLayout();
		this->ResumeLayout(false);

	}

#pragma endregion
	
	//////////////////////////////////////////
	// Дополнительные функции работы с файлами
	//////////////////////////////////////////
	
	#pragma region Дополнительные функции

	DateTime getCurrentDate() {
		time_t now = time(0);
		tm* ltm = localtime(&now);
		DateTime date;
		date.day = ltm->tm_mday;
		date.month = 1 + ltm->tm_mon;
		date.year = 1900 + ltm->tm_year;
		return date;
	}
	
	System::String^ formatDate(const DateTime& date) {
		return date.day.ToString("D2") + "." + date.month.ToString("D2") + "." + date.year.ToString();
	}
	
	void saveToDb(const Record& record) {
		std::ofstream outFile(dbFilePath, std::ios::app);
		if (outFile.is_open()) {
			outFile << record.fileName << "|"
			<< record.sizeFile << "|"
			<< record.cryptType << "|"
			<< record.date.day << "/" << record.date.month << "/" << record.date.year << "|"
			<< record.text << "|"
			<< record.textRes << "|"
			<< record.key << "\n";
			outFile.close();
		}
		else {
			MessageBox::Show("Не удалось открыть файл db.txt для записи!", "Ошибка", 
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	void updateDataGridView() {
		dataGridViewTable->Rows->Clear();
		std::ifstream inFile(dbFilePath);
		if (inFile.is_open()) {
			std::string line;
			while (std::getline(inFile, line)) {
				std::stringstream ss(line);
				Record record;
				std::string dateStr;
				std::getline(ss, record.fileName, '|');
				ss >> record.sizeFile;
				ss.ignore(1, '|');
				std::getline(ss, record.cryptType, '|');
				std::getline(ss, dateStr, '|');
				std::getline(ss, record.text, '|');
				std::getline(ss, record.textRes, '|');
				std::getline(ss, record.key, '|');
				
				if (!record.fileName.empty()) {
					std::stringstream dateStream(dateStr);
					char delim;
					dateStream >> record.date.day >> delim >> record.date.month >> delim >> record.date.year;

					dataGridViewTable->Rows->Add(
						gcnew String(record.fileName.c_str()),
						record.sizeFile.ToString(),
						gcnew String(record.cryptType.c_str()),
						formatDate(record.date),
						gcnew String(record.text.c_str()),
						gcnew String(record.textRes.c_str()),
						gcnew String(record.key.c_str())
					);
				}
			}
			inFile.close();
		}
		else {
			MessageBox::Show("Не удалось открыть файл db.txt для чтения!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	bool CompareByDateAscending(const Record& a, const Record& b) {
		if (a.date.year != b.date.year) return a.date.year < b.date.year;
		if (a.date.month != b.date.month) return a.date.month < b.date.month;
		return a.date.day < b.date.day;
	}

	bool CompareByDateDescending(const Record& a, const Record& b) {
		if (a.date.year != b.date.year) return a.date.year > b.date.year;
		if (a.date.month != b.date.month) return a.date.month > b.date.month;
		return a.date.day > b.date.day;
	}

	bool CompareByNameAscending(const Record& a, const Record& b) {
		return a.fileName < b.fileName;
	}

	bool CompareByNameDescending(const Record& a, const Record& b) {
		return a.fileName > b.fileName;
	}

	#pragma endregion
	
	////////////////////////
	// События для формы AES
	////////////////////////
	
	#pragma region События AES

	private: System::Void buttonOpenFileEncryptAES_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			richTextBoxEncryptAES->Text =
				System::IO::File::ReadAllText(openFileDialog->FileName,
					System::Text::Encoding::UTF8);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при чтении файла: " + ex->Message,
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
	
	private: System::Void buttonEncryptAES_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(richTextBoxEncryptAES->Text) || String::IsNullOrEmpty(textKeyBoxEncryptAES->Text)) {
		MessageBox::Show("Заполните текст и ключ для шифрования!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try {
		std::string text = marshal_as<std::string>(richTextBoxEncryptAES->Text);
		std::string key = marshal_as<std::string>(textKeyBoxEncryptAES->Text);

		// Вызов функции шифрования
		String^ encryptedTextManaged = encryptAES(richTextBoxEncryptAES->Text, textKeyBoxEncryptAES->Text);
		std::string encryptedText = marshal_as<std::string>(encryptedTextManaged);

		richTextBoxDecryptAES->Text = encryptedTextManaged;

		Record record;
		String^ baseFileName = System::IO::Path::GetFileName(openFileDialog->FileName);
		record.fileName = marshal_as<std::string>(baseFileName);
		record.sizeFile = text.length();
		record.cryptType = "AES";
		record.date = getCurrentDate();
		record.text = text;
		record.textRes = encryptedText;
		record.key = key;

		if (!record.key.empty() && !record.textRes.empty()) {
			saveToDb(record);
			updateDataGridView();
		}

		MessageBox::Show("Шифрование выполнено успешно!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (std::exception& ex) {
		MessageBox::Show(gcnew String(ex.what()), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Ошибка при шифровании: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	
	private: System::Void buttonOpenFileDecryptAES_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			richTextBoxDecryptAES->Text = 
				System::IO::File::ReadAllText(openFileDialog->FileName, 
					System::Text::Encoding::UTF8);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при чтении файла: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
	
	private: System::Void buttonDecryptAES_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(richTextBoxDecryptAES->Text) || String::IsNullOrEmpty(textBoxKeyDecryptAES->Text)) {
		MessageBox::Show("Заполните текст и ключ для дешифрования!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try {
		std::string encryptedText = marshal_as<std::string>(richTextBoxDecryptAES->Text);
		std::string key = marshal_as<std::string>(textBoxKeyDecryptAES->Text);

		String^ decryptedTextManaged = decryptAES(richTextBoxDecryptAES->Text, textBoxKeyDecryptAES->Text);
		std::string decryptedText = marshal_as<std::string>(decryptedTextManaged);

		richTextBoxEncryptAES->Text = decryptedTextManaged;

		Record record;
		String^ baseFileName = System::IO::Path::GetFileName(openFileDialog->FileName);
		record.fileName = marshal_as<std::string>(baseFileName);
		record.sizeFile = encryptedText.length();
		record.cryptType = "AES";
		record.date = getCurrentDate();
		record.text = encryptedText;
		record.textRes = decryptedText;
		record.key = key;

		if (!record.key.empty() && !record.textRes.empty()) {
			saveToDb(record);
			updateDataGridView();
		}

		MessageBox::Show("Дешифрование выполнено успешно!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (std::exception& ex) {
		MessageBox::Show(gcnew String(ex.what()), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Ошибка при дешифровании: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	
	private: System::Void buttonClearAllTextBoxAES_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBoxEncryptAES->Text = "";
		richTextBoxDecryptAES->Text = "";
		textKeyBoxEncryptAES->Text = "";
		textBoxKeyDecryptAES->Text = "";
		MessageBox::Show("Все поля очищены!", "Успех", 
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

#pragma endregion
	
	////////////////////////
	// События для формы RSA
	////////////////////////

	#pragma region События RSA

	private: System::Void buttonGenerateKeysRSA_Click(System::Object ^ sender, System::EventArgs ^ e) {
		try {
			String^ publicKey;
			String^ privateKey;
			generateRSAKeys(publicKey, privateKey);
			richTextBoxKeyPublicRSA->Text = publicKey;
			richTextBoxKeyPrivateRSA->Text = privateKey;
			MessageBox::Show("Ключи сгенерированы успешно!", "Успех", 
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Ошибка", 
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	private: System::Void buttonOpenFileEncryptRSA_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				richTextBoxEncryptRSA->Text = System::IO::File::ReadAllText(openFileDialog->FileName, System::Text::Encoding::UTF8);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при чтении файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	
	private: System::Void buttonEncryptRSA_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(richTextBoxEncryptRSA->Text) || String::IsNullOrEmpty(textBoxKeyEncryptRSA->Text)) {
			MessageBox::Show("Заполните текст и публичный ключ для шифрования!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	
		try {
			std::string text = marshal_as<std::string>(richTextBoxEncryptRSA->Text);
			String^ publicKey = textBoxKeyEncryptRSA->Text;
	
			String^ encryptedTextManaged = encryptRSA(richTextBoxEncryptRSA->Text, publicKey);
			std::string encryptedText = marshal_as<std::string>(encryptedTextManaged);
	
			richTextBoxDecryptRSA->Text = encryptedTextManaged;
	
			Record record;
			String^ baseFileName = System::IO::Path::GetFileName(openFileDialog->FileName);
			record.fileName = marshal_as<std::string>(baseFileName);
			record.sizeFile = text.length();
			record.cryptType = "RSA";
			record.date = getCurrentDate();
			record.text = text;
			record.textRes = encryptedText;
			record.key = marshal_as<std::string>(publicKey);
	
			if (!record.key.empty() && !record.textRes.empty()) {
				saveToDb(record);
				updateDataGridView();
			}
	
			MessageBox::Show("Шифрование выполнено успешно!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при шифровании: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	private: System::Void buttonOpenFileDecryptRSA_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				richTextBoxDecryptRSA->Text = 
					System::IO::File::ReadAllText(openFileDialog->FileName, System::Text::Encoding::UTF8);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при чтении файла: " + ex->Message, 
					"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	
	private: System::Void buttonDecryptRSA_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(richTextBoxDecryptRSA->Text) || String::IsNullOrEmpty(textBoxKeyDecryptRSA->Text)) {
			MessageBox::Show("Заполните текст и приватный ключ для дешифрования!", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	
		try {
			std::string encryptedText = marshal_as<std::string>(richTextBoxDecryptRSA->Text);
			String^ privateKey = textBoxKeyDecryptRSA->Text;
	
			String^ decryptedTextManaged = decryptRSA(richTextBoxDecryptRSA->Text, privateKey);
			std::string decryptedText = marshal_as<std::string>(decryptedTextManaged);
	
			richTextBoxEncryptRSA->Text = decryptedTextManaged;
	
			Record record;
			String^ baseFileName = System::IO::Path::GetFileName(openFileDialog->FileName);
			record.fileName = marshal_as<std::string>(baseFileName);
			record.sizeFile = encryptedText.length();
			record.cryptType = "RSA";
			record.date = getCurrentDate();
			record.text = encryptedText;
			record.textRes = decryptedText;
			record.key = marshal_as<std::string>(privateKey);
	
			if (!record.key.empty() && !record.textRes.empty()) {
				saveToDb(record);
				updateDataGridView();
			}
	
			MessageBox::Show("Дешифрование выполнено успешно!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при дешифровании: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	private: System::Void buttonClearAllTextBoxRSA_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBoxEncryptRSA->Text = "";
		richTextBoxDecryptRSA->Text = "";
		textBoxKeyEncryptRSA->Text = "";
		textBoxKeyDecryptRSA->Text = "";
		richTextBoxKeyPublicRSA->Text = "";
		richTextBoxKeyPrivateRSA->Text = "";
		MessageBox::Show("Все поля очищены!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

#pragma endregion

	////////////////////////
	// События для таблицы 
	////////////////////////

	#pragma region События таблицы

	private: System::Void buttonDefoultTable_Click(System::Object^ sender, System::EventArgs^ e) {
		radioButtonTypeEncryptionTable->Checked = false;
		radioButtonAverageSizeFilesTable->Checked = false;
		textBoxInputTypeEncryptionTable->Enabled = false;
		comboBoxSortsTable->SelectedIndex = 0; 
		radioButtonDescendingTable->Checked = false;
		radioButtonAscendingTable->Checked = false;
		checkBoxBigFileTable->Checked = false;
		textBoxInputTypeEncryptionTable->Text = "AES";
		updateDataGridView();
		MessageBox::Show("Настройки сброшены к значениям по умолчанию!", "Успех",
			MessageBoxButtons::OK, MessageBoxIcon::Information);


	}

	private: System::Void buttonReserchTable_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridViewTable->Rows->Clear();

		std::ifstream inFile(dbFilePath);
		if (!inFile.is_open()) {
			MessageBox::Show("Не удалось открыть файл db.txt для чтения!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		std::string line;
		bool hasRecords = false;
		bool hasFilteredRecords = false;
		Record maxRec;
		int maxSize = -1;
		bool firstRecord = true;
		float sum = 0;
		int count = 0;

		bool filterByType = radioButtonTypeEncryptionTable->Checked;
		bool filterBySize = radioButtonAverageSizeFilesTable->Checked;
		std::string filterType = filterByType ? marshal_as<std::string>(textBoxInputTypeEncryptionTable->Text) : "";

		while (std::getline(inFile, line)) {
			std::stringstream ss(line);
			Record record;
			std::string dateStr;
			std::getline(ss, record.fileName, '|');
			ss >> record.sizeFile;
			ss.ignore(1, '|');
			std::getline(ss, record.cryptType, '|');
			std::getline(ss, dateStr, '|');
			std::getline(ss, record.text, '|');
			std::getline(ss, record.textRes, '|');
			std::getline(ss, record.key, '|');

			if (!record.fileName.empty()) {
				std::stringstream dateStream(dateStr);
				char delim;
				dateStream >> record.date.day >> delim >> record.date.month >> delim >> record.date.year;
				hasRecords = true;

				sum += record.sizeFile;
				count++;

				if (checkBoxBigFileTable->Checked) {
					if (firstRecord || record.sizeFile > maxSize) {
						maxSize = record.sizeFile;
						maxRec = record;
						firstRecord = false;
					}
				}
			}
		}
		inFile.close();

		if (!hasRecords) {
			MessageBox::Show("База записей пуста!", "Предупреждение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		float average = count > 0 ? sum / count : 0;
		if (filterBySize) {
			MessageBox::Show("Средний размер файла: " + average.ToString() + " байт",
				"Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if (checkBoxBigFileTable->Checked && !firstRecord) {
			MessageBox::Show(
				"Наибольший по размеру файл:\n" +
				"Название: " + gcnew String(maxRec.fileName.c_str()) + "\n" +
				"Размер: " + maxRec.sizeFile.ToString() + "\n" +
				"Тип шифрования: " + gcnew String(maxRec.cryptType.c_str()) + "\n" +
				"Дата: " + formatDate(maxRec.date),
				"Наибольший файл", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}


		std::ifstream inFile2(dbFilePath);
		if (!inFile2.is_open()) {
			MessageBox::Show("Не удалось открыть файл db.txt для чтения!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		const int MAX_RECORDS = 1000; 
		Record records[MAX_RECORDS];
		int recordCount = 0;

		while (std::getline(inFile2, line) && recordCount < MAX_RECORDS) {
			std::stringstream ss(line);
			Record record;
			std::string dateStr;
			std::getline(ss, record.fileName, '|');
			ss >> record.sizeFile;
			ss.ignore(1, '|');
			std::getline(ss, record.cryptType, '|');
			std::getline(ss, dateStr, '|');
			std::getline(ss, record.text, '|');
			std::getline(ss, record.textRes, '|');
			std::getline(ss, record.key, '|');

			if (!record.fileName.empty()) {
				std::stringstream dateStream(dateStr);
				char delim;
				dateStream >> record.date.day >> delim >> record.date.month >> delim >> record.date.year;

				bool addRecord = false;
				if (filterByType) {
					if (record.cryptType == filterType) {
						addRecord = true;
					}
				}
				else if (filterBySize) {
					if (record.sizeFile > average) { 
						addRecord = true;
					}
				}
				else {
					addRecord = true;
				}

				if (addRecord) {
					records[recordCount] = record;
					recordCount++;
					hasFilteredRecords = true;
				}
			}
		}
		inFile2.close();

		if (recordCount > 0 && comboBoxSortsTable->SelectedIndex >= 0) {
			bool ascending = radioButtonAscendingTable->Checked;
			if (comboBoxSortsTable->SelectedIndex == 0) { 
				for (int i = 0; i < recordCount - 1; i++) {
					int minIndex = i;
					for (int j = i + 1; j < recordCount; j++) {
						bool isLess;
						if (ascending) {
							if (records[j].date.year != records[minIndex].date.year) {
								isLess = records[j].date.year < records[minIndex].date.year;
							}
							else if (records[j].date.month != records[minIndex].date.month) {
								isLess = records[j].date.month < records[minIndex].date.month;
							}
							else {
								isLess = records[j].date.day < records[minIndex].date.day;
							}
						}
						else {
							if (records[j].date.year != records[minIndex].date.year) {
								isLess = records[j].date.year > records[minIndex].date.year;
							}
							else if (records[j].date.month != records[minIndex].date.month) {
								isLess = records[j].date.month > records[minIndex].date.month;
							}
							else {
								isLess = records[j].date.day > records[minIndex].date.day;
							}
						}
						if (isLess) {
							minIndex = j;
						}
					}
					if (minIndex != i) {
						Record temp = records[i];
						records[i] = records[minIndex];
						records[minIndex] = temp;
					}
				}
			}
			else if (comboBoxSortsTable->SelectedIndex == 1) { 
				for (int i = 0; i < recordCount - 1; i++) {
					int minIndex = i;
					for (int j = i + 1; j < recordCount; j++) {
						bool isLess = ascending ?
							records[j].fileName < records[minIndex].fileName :
							records[j].fileName > records[minIndex].fileName;
						if (isLess) {
							minIndex = j;
						}
					}
					if (minIndex != i) {
						Record temp = records[i];
						records[i] = records[minIndex];
						records[minIndex] = temp;
					}
				}
			}
		}

		for (int i = 0; i < recordCount; i++) {
			dataGridViewTable->Rows->Add(
				gcnew String(records[i].fileName.c_str()),
				records[i].sizeFile.ToString(),
				gcnew String(records[i].cryptType.c_str()),
				formatDate(records[i].date),
				gcnew String(records[i].text.c_str()),
				gcnew String(records[i].textRes.c_str()),
				gcnew String(records[i].key.c_str())
			);
		}

		if (!hasFilteredRecords) {
			MessageBox::Show("Записи по заданным критериям не найдены!", "Предупреждение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void radioButtonTypeEncryptionTable_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBoxInputTypeEncryptionTable->Enabled = radioButtonTypeEncryptionTable->Checked;
		label1->Enabled = true;
	}

	private: System::Void radioButtonAverageSizeFilesTable_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBoxInputTypeEncryptionTable->Enabled = !radioButtonAverageSizeFilesTable->Checked;
		label1->Enabled = false;

	}



#pragma endregion





};
}
