#pragma once
#include <string>
#include "Differenze_esplicite.h"
#include "PadreImport.h"
#include "CSVimport.h"
#include "ImportTXT.h"
#include "ImportINI.h"
#include "PadreExport.h"
#include "ExportCSV.h"
#include "ExportTXT.h"
#include "ExportINI.h"
#include <vector>
#include "differenze_implicite.h"
#include "Risultati.h"

// definisco le variaibli globali che usero poi

size_t righe = 0;	
vector <double> Sv;
vector <double> Kv;
vector <double> rv;
vector <double> sigmav;
vector <double> timev;
vector <int> no_S_stepsv;
vector <int> no_t_stepsv;
bool fileinserito = 0;
vector<double> risexpeu;
vector<double> risexpus;
vector<double> risimpeu;
vector<double> risimpus;


double Sman = 0;				//creo delle variabili locali per salvare i dati dell inserimento manuale
double Kman = 0;
double rman =0;
double sigmaman =0;
double timeman = 0;
int no_s_stepsman = 0;
int no_t_stepsman = 0;





namespace Differenzefinite {





	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per FormMain
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
		{
			InitializeComponent();



			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	protected:

	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMain::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(284, 537);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CALCOLA";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormMain::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(531, 579);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SALVA";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormMain::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"INSERISCI FILE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormMain::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"50";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormMain::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(55, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"50";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(200, 46);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(55, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"1";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(256, 46);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(55, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"1";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(312, 46);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"1";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(368, 46);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(55, 20);
			this->textBox6->TabIndex = 8;
			this->textBox6->Text = L"20";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(424, 46);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(55, 20);
			this->textBox7->TabIndex = 7;
			this->textBox7->Text = L"11";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->Location = System::Drawing::Point(256, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"SIGMA";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(312, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"time";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(368, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"S STEPS";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->Location = System::Drawing::Point(424, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"T STEPS";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->Location = System::Drawing::Point(200, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"r";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->Location = System::Drawing::Point(144, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"K";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->Location = System::Drawing::Point(88, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"S";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"csv";
			this->openFileDialog1->FileName = L"CSVinput.csv";
			this->openFileDialog1->Filter = L"Files TXT (*.txt)|*.TXT|Files CSV (*.csv)|*.csv|Files INI (*.ini)|*.ini;";
			this->openFileDialog1->FilterIndex = 2;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(157, 130);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(158, 17);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L"Differenze finite esplicite EU";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(157, 153);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(158, 17);
			this->checkBox2->TabIndex = 21;
			this->checkBox2->Text = L"Differenze finite esplicite US";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(157, 176);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(157, 17);
			this->checkBox3->TabIndex = 22;
			this->checkBox3->Text = L"Differenze finite implicite EU";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(157, 199);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(157, 17);
			this->checkBox4->TabIndex = 23;
			this->checkBox4->Text = L"Differenze finite implicite US";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(401, 99);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(110, 20);
			this->textBox8->TabIndex = 27;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(289, 99);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(110, 20);
			this->textBox9->TabIndex = 26;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(176, 99);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(110, 20);
			this->textBox10->TabIndex = 25;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(64, 99);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(110, 20);
			this->textBox11->TabIndex = 24;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(67, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Risultati esplicite EU";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(179, 83);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Risultati esplicite US";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(291, 83);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 13);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Risultati implicite EU";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(402, 83);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 13);
			this->label11->TabIndex = 34;
			this->label11->Text = L"Risultati implicite US";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(147, 22);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(524, 20);
			this->textBox12->TabIndex = 35;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(26, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 20);
			this->button4->TabIndex = 36;
			this->button4->Text = L"ANNULLA";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormMain::button4_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Files TXT (*.txt)|*.txt|Files CSV (*.csv)|*.csv|Files INI (*.ini)|*.ini;";
			this->saveFileDialog1->FilterIndex = 2;
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &FormMain::saveFileDialog1_FileOk);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(204, 103);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 13);
			this->label12->TabIndex = 37;
			this->label12->Text = L"CALCOLO";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(419, 103);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 13);
			this->label13->TabIndex = 42;
			this->label13->Text = L"EXPORT";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Enabled = false;
			this->checkBox5->Location = System::Drawing::Point(372, 199);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(157, 17);
			this->checkBox5->TabIndex = 41;
			this->checkBox5->Text = L"Differenze finite implicite US";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Enabled = false;
			this->checkBox6->Location = System::Drawing::Point(372, 176);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(157, 17);
			this->checkBox6->TabIndex = 40;
			this->checkBox6->Text = L"Differenze finite implicite EU";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Enabled = false;
			this->checkBox7->Location = System::Drawing::Point(372, 153);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(158, 17);
			this->checkBox7->TabIndex = 39;
			this->checkBox7->Text = L"Differenze finite esplicite US";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Enabled = false;
			this->checkBox8->Location = System::Drawing::Point(372, 130);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(158, 17);
			this->checkBox8->TabIndex = 38;
			this->checkBox8->Text = L"Differenze finite esplicite EU";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(124, 489);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(447, 23);
			this->progressBar1->TabIndex = 43;
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(531, 537);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 38);
			this->button5->TabIndex = 44;
			this->button5->Text = L"RISULTATI";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FormMain::button5_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(132, 65);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(382, 13);
			this->label14->TabIndex = 45;
			this->label14->Text = L"<-- PREMERE DOPO UN ERRORE O PER TORNARE ALL INPUT MANUALE";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Location = System::Drawing::Point(57, 273);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(583, 150);
			this->groupBox1->TabIndex = 46;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"INSERIMENTO MANUALE";
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 629);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"FormMain";
			this->Text = L"Differenze Finite";
			this->Load += gcnew System::EventHandler(this, &FormMain::FormMain_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormMain_Load(System::Object^  sender, System::EventArgs^  e) {
	}

			 //bottone INSERISCI FILE

	public: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {	



		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)	// apro la finistra per la selezione file ed eseguo il codice sottostante solo se premo apri
		{

			openFileDialog1->OpenFile();							//apro il file per la lettura
			textBox12->Text = openFileDialog1->FileName;			//leggo il suo nome e lo stampo a video
			String^ Snome_file = openFileDialog1->FileName;			// salvo il nome per riutilizzarlo nelle future classi
			fileinserito = 1;										// dico alle classi future che il file è inserito			
			bool filecsv = Snome_file->Contains(".csv");			//preparo le variabili per la futura selezione della classe in base all estensione
			bool filetxt = Snome_file->Contains(".txt");
			bool fileini = Snome_file->Contains(".ini");

			if (filecsv == 1)										// nel caso il file contiene .csv nel nome creo le relative classi
			{
				parametriCSV^ inputcsv=gcnew parametriCSV(Snome_file);	//inizializzo l oggetto inputcsv che prende in ingresso il nome del file

				try {
					inputcsv->leggifile();								//chiamo la funzione leggifile
					righe = inputcsv->contatore;						// salvo le righe del file per le future operazioni
					MessageBox::Show("Import file effettuato");			// faccio comparire un messaggio per l' import 
					textBox1->Enabled = 0;								// diabilito le textbox dell input manuale
					textBox2->Enabled = 0;
					textBox3->Enabled = 0;
					textBox4->Enabled = 0;
					textBox5->Enabled = 0;
					textBox6->Enabled = 0;
					textBox7->Enabled = 0;
					checkBox5->Enabled = 1;								// abilito le checkbox per l' export
					checkBox6->Enabled = 1;
					checkBox7->Enabled = 1;
					checkBox8->Enabled = 1;

					/* cambio la dimensione delle mie variabili in base al numero delle righe contate per non sprecare memoria*/
					Sv.resize(righe);
					Kv.resize(righe);
					rv.resize(righe);
					sigmav.resize(righe);
					timev.resize(righe);
					no_S_stepsv.resize(righe);
					no_t_stepsv.resize(righe);
					risexpeu.resize(righe);
					risexpus.resize(righe);
					risimpeu.resize(righe);
					risimpus.resize(righe);


					// salvo i miei parametri nelle variabili globali

					for (int i = 0; i < righe; i++)
					{
						Sv[i] = inputcsv->S[i];
						Kv[i] = inputcsv->K[i];
						rv[i] = inputcsv->r[i];
						sigmav[i] = inputcsv->sigma[i];
						timev[i] = inputcsv->time[i];
						no_S_stepsv[i] = inputcsv->no_s_steps[i];
						no_t_stepsv[i] = inputcsv->no_t_steps[i];
					}
					
				}
				catch (System::Exception^)								//guardo le eccezioni visto che lavoro con vettori
				{
					System::Windows::Forms::MessageBox::Show("Errore nel file di input, controllare la sintassi e che i separatori siano corretti.\n PREMERE ANNULLA E RIPROVARE");
					inputcsv->clear();									//nel caso di eccezioni pulisco tutto quello che ho usato
					Sv.clear();
					Sv.shrink_to_fit();
					Kv.clear();
					Kv.shrink_to_fit();
					rv.clear();
					rv.shrink_to_fit();
					sigmav.clear();
					sigmav.shrink_to_fit();
					timev.clear();
					timev.shrink_to_fit();
					no_S_stepsv.clear();
					no_S_stepsv.shrink_to_fit();
					no_t_stepsv.clear();
					no_t_stepsv.shrink_to_fit();
					fileinserito = 0;
				
				}
			
			}

			// rieseguo le stesse operazioni  per i file txt

			if (fileini == 1)
			{
				parametriINI^ inputINI = gcnew parametriINI(Snome_file);
				try {
					inputINI->leggifile();									//chiamo la funzione leggifile
					righe = inputINI->contatore;							// salvo le righe del file per le future operazioni
					MessageBox::Show("Import file effettuato");				// faccio comparire un messaggio per l' import 
					textBox1->Enabled = 0;									// diabilito le textbox dell input manuale
					textBox2->Enabled = 0;
					textBox3->Enabled = 0;
					textBox4->Enabled = 0;
					textBox5->Enabled = 0;
					textBox6->Enabled = 0;
					textBox7->Enabled = 0;

					/* cambio la dimensione delle mie variabili in base al numero delle righe contate per non sprecare memoria*/
					Sv.resize(righe);
					Kv.resize(righe);
					rv.resize(righe);
					sigmav.resize(righe);
					timev.resize(righe);
					no_S_stepsv.resize(righe);
					no_t_stepsv.resize(righe);
					risexpeu.resize(righe);
					risexpus.resize(righe);
					risimpeu.resize(righe);
					risimpus.resize(righe);

					checkBox5->Enabled = 1;									// abilito le checkbox per l' export
					checkBox6->Enabled = 1;
					checkBox7->Enabled = 1;
					checkBox8->Enabled = 1;


					for (int i = 0; i < righe; i++)							// salvo i miei parametri nelle variabili globali
					{
						Sv[i] = inputINI->S[i];
						Kv[i] = inputINI->K[i];
						rv[i] = inputINI->r[i];
						sigmav[i] = inputINI->sigma[i];
						timev[i] = inputINI->time[i];
						no_S_stepsv[i] = inputINI->no_s_steps[i];
						no_t_stepsv[i] = inputINI->no_t_steps[i];
					}
					
				}
				catch (System::Exception^)									//guardo le eccezioni visto che lavoro con vettori
				{
					System::Windows::Forms::MessageBox::Show("Errore nel file di input, controllare la sintassi e che i separatori siano corretti.\n PREMERE ANNULLA E RIPROVARE");
					inputINI->clear();										//nel caso di eccezioni pulisco tutto quello che ho usato
					Sv.clear();
					Sv.shrink_to_fit();
					Kv.clear();
					Kv.shrink_to_fit();
					rv.clear();
					rv.shrink_to_fit();
					sigmav.clear();
					sigmav.shrink_to_fit();
					timev.clear();
					timev.shrink_to_fit();
					no_S_stepsv.clear();
					no_S_stepsv.shrink_to_fit();
					no_t_stepsv.clear();
					no_t_stepsv.shrink_to_fit();
					fileinserito = 0;
					
				}
				
			}

			// rieseguo le stesse operazioni  per i file ini

			if (filetxt == 1)
			{
				parametriTXT^ inputtxt=gcnew parametriTXT(Snome_file);
				try {
					inputtxt->leggifile();									//chiamo la funzione leggifile
					righe = inputtxt->contatore;							// salvo le righe del file per le future operazioni
					MessageBox::Show("Import file effettuato");				// faccio comparire un messaggio per l' import 
					textBox1->Enabled = 0;									// diabilito le textbox dell input manuale
					textBox2->Enabled = 0;
					textBox3->Enabled = 0;
					textBox4->Enabled = 0;
					textBox5->Enabled = 0;
					textBox6->Enabled = 0;
					textBox7->Enabled = 0;

					/* cambio la dimensione delle mie variabili in base al numero delle righe contate per non sprecare memoria*/
					Sv.resize(righe);
					Kv.resize(righe);
					rv.resize(righe);
					sigmav.resize(righe);
					timev.resize(righe);
					no_S_stepsv.resize(righe);
					no_t_stepsv.resize(righe);
					risexpeu.resize(righe);
					risexpus.resize(righe);
					risimpeu.resize(righe);
					risimpus.resize(righe);


					checkBox5->Enabled = 1;									// abilito le checkbox per l' export
					checkBox6->Enabled = 1;
					checkBox7->Enabled = 1;
					checkBox8->Enabled = 1;

					for (int i = 0; i < righe; i++)							// salvo i miei parametri nelle variabili globali
					{														
						Sv[i] = inputtxt->S[i];
						Kv[i] = inputtxt->K[i];
						rv[i] = inputtxt->r[i];
						sigmav[i] = inputtxt->sigma[i];
						timev[i] = inputtxt->time[i];
						no_S_stepsv[i] = inputtxt->no_s_steps[i];
						no_t_stepsv[i] = inputtxt->no_t_steps[i];
					}
					
				}
				catch (System::Exception^ )									//guardo le eccezioni visto che lavoro con vettori
				{
					System::Windows::Forms::MessageBox::Show("Errore nel file di input, controllare la sintassi e che i separatori siano corretti.\n PREMERE ANNULLA E RIPROVARE");
					inputtxt->clear();										//nel caso di eccezioni pulisco tutto quello che ho usato
					Sv.clear();
					Sv.shrink_to_fit();
					Kv.clear();
					Kv.shrink_to_fit();
					rv.clear();
					rv.shrink_to_fit();
					sigmav.clear();
					sigmav.shrink_to_fit();
					timev.clear();
					timev.shrink_to_fit();
					no_S_stepsv.clear();
					no_S_stepsv.shrink_to_fit();
					no_t_stepsv.clear();
					no_t_stepsv.shrink_to_fit();
					fileinserito = 0;
					
				}
				

			}
		}
		
	}



			/*PULSANTE CALCOLA*/


	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		/* In base a le variabili settate in precedenza eseguo diversi tipi di calcoli*/
		progressBar1->Value = 0;
		try 
		{
			if (checkBox1->Checked && fileinserito == 1)									// se il file è inserito e il primo checkbox è checkato
			{
				Differenze_esplicite^ expeu = gcnew Differenze_esplicite;					// creo una classe per le differenze finite esplicite europee

				for (int i = 0; i < righe; i++)												// eseguo il primo algoritmo su tutti i parametri nelle variabili globali
				{


					expeu->SetVariabili(Sv[i], Kv[i], rv[i], sigmav[i], timev[i], no_S_stepsv[i], no_t_stepsv[i]);	// setto le variabili utilizzate nell algoritmo per ogni ciclo
					risexpeu[i] = expeu->option_price_put_european_finite_diff_explicit();							// salvo i risultato nel vettore dei risultati apposito
					button2->Enabled = 1;																			// abilito il pulsante per salvare e per i risultati
					button5->Enabled = 1;
				}

				

			}
			if (checkBox2->Checked && fileinserito == 1)					 				// se il file è inserito e il secondo checkbox è checkato
			{
				Differenze_esplicite^ expus = gcnew Differenze_esplicite;				// creo una classe per le differenze finite esplicite americane

				for (int i = 0; i < righe; i++)											// eseguo il secondo algoritmo su tutti i parametri nelle variabili globali
				{
					expus->SetVariabili(Sv[i], Kv[i], rv[i], sigmav[i], timev[i], no_S_stepsv[i], no_t_stepsv[i]);	// setto le variabili utilizzate nell algoritmo per ogni ciclo
					risexpus[i] = expus->option_price_put_american_finite_diff_explicit();							// salvo i risultato nel vettore dei risultati apposito
					button2->Enabled = 1;																			// abilito il pulsante per salvare e per guardare i risultati
					button5->Enabled = 1;
				}

				

			}
			if (checkBox3->Checked && fileinserito == 1)																// se il file è inserito e il terzo checkbox è checkato
			{
				differenze_implicite^ impeu = gcnew differenze_implicite;												// creo una classe per le differenze finite implicite europee

				for (int i = 0; i < righe; i++)																			// eseguo il terzo algoritmo su tutti i parametri nelle variabili globali
				{
					impeu->SetVariabili(Sv[i], Kv[i], rv[i], sigmav[i], timev[i], no_S_stepsv[i], no_t_stepsv[i]);	 // setto le variabili utilizzate nell algoritmo per ogni ciclo
					risimpeu[i] = impeu->option_price_put_european_finite_diff_implicit();							 // salvo i risultato nel vettore dei risultati apposito
					button2->Enabled = 1;																			 // abilito il pulsante per salvare e per guardare i risultati
					button5->Enabled = 1;
				}
				
			}
			if (checkBox4->Checked && fileinserito == 1)										// se il file è inserito e il quarto checkbox è checkato
			{
				differenze_implicite^ impus = gcnew differenze_implicite;						// creo una classe per le differenze finite implicite americane
				for (int i = 0; i < righe; i++)													// eseguo il quarto algoritmo su tutti i parametri nelle variabili globali
				{
					impus->SetVariabili(Sv[i], Kv[i], rv[i], sigmav[i], timev[i], no_S_stepsv[i], no_t_stepsv[i]);		// setto le variabili utilizzate nell algoritmo per ogni ciclo
					risimpus[i] = impus->option_price_put_american_finite_diff_implicit();								// salvo i risultato nel vettore dei risultati apposito
					button2->Enabled = 1;																				// abilito il pulsante per salvare e per guardare i risultati
					button5->Enabled = 1;
				}
				
			}
		}
		catch (System::Exception^) 
		{
			risexpeu.clear();
			risexpus.clear();
			risimpeu.clear();
			risimpus.clear();

		}




		if ((checkBox1->Checked || checkBox2->Checked || checkBox3->Checked || checkBox4->Checked) && fileinserito == 1) { progressBar1->Value = 100; }

		//FILE DISINSERITO
		textBox11->Text = "";		// pulisco le textbox nel caso i dati cambino e non mi interessa un particolare risultato
		textBox10->Text = "";
		textBox9->Text = "";
		textBox8->Text = "";


		if (fileinserito == 0) {							//nel caso non si abbia un file passo all inserimento manuale
			try {

				 Sman = System::Convert::ToDouble(textBox1->Text);				//creo delle variabili locali per salvare i dati dell inserimento manuale
				 Kman = System::Convert::ToDouble(textBox2->Text);
				 rman = System::Convert::ToDouble(textBox3->Text);
				 sigmaman = System::Convert::ToDouble(textBox4->Text);
				 timeman = System::Convert::ToDouble(textBox5->Text);
				 no_s_stepsman = System::Convert::ToInt32(textBox6->Text);
				 no_t_stepsman = System::Convert::ToInt32(textBox7->Text);



				if (checkBox1->Checked || checkBox2->Checked || checkBox3->Checked || checkBox4->Checked == 1) { progressBar1->Value = 100; }

				if (checkBox1->Checked == 1)											//eseguo i vari algoritmi per i parametri manuali
				{
					Differenze_esplicite^ expman=gcnew Differenze_esplicite;										//creo una classe per gli algoritmi
					expman->SetVariabili(Sman, Kman, rman, sigmaman, timeman, no_s_stepsman, no_t_stepsman);		//setto le variabili delle classi
					double risexpeuman = expman->option_price_put_european_finite_diff_explicit();					//salvo i risultati
					textBox11->Text = System::Convert::ToString(risexpeuman);										//visualizzo il risultato nella textbox
																									//cancello la classe
				}
				if (checkBox2->Checked == 1)
				{
					Differenze_esplicite^ expman2=gcnew Differenze_esplicite;										//creo una classe per gli algoritmi
					expman2->SetVariabili(Sman, Kman, rman, sigmaman, timeman, no_s_stepsman, no_t_stepsman);		//setto le variabili delle classi
					double risexpusman = expman2->option_price_put_american_finite_diff_explicit();					//salvo i risultati
					textBox10->Text = System::Convert::ToString(risexpusman);										//visualizzo il risultato nella textbox
																								//cancello la classe
				}
				if (checkBox3->Checked == 1)
				{
					differenze_implicite^ impman=gcnew differenze_implicite;										//creo una classe per gli algoritmi
					impman->SetVariabili(Sman, Kman, rman, sigmaman, timeman, no_s_stepsman, no_t_stepsman);		//setto le variabili delle classi
					double risimpeuman = impman->option_price_put_european_finite_diff_implicit();					//salvo i risultati
					textBox9->Text = System::Convert::ToString(risimpeuman);										//visualizzo il risultato nella textbox
																								//cancello la classe
				}
				if (checkBox4->Checked == 1)
				{
					differenze_implicite^ impman2=gcnew differenze_implicite;										//creo una classe per gli algoritmi
					impman2->SetVariabili(Sman, Kman, rman, sigmaman, timeman, no_s_stepsman, no_t_stepsman);		//setto le variabili delle classi
					double risimpusman = impman2->option_price_put_american_finite_diff_implicit();					//salvo i risultati
					textBox8->Text = System::Convert::ToString(risimpusman);										//visualizzo il risultato nella textbox
																						//cancello la classe
				}
			}
			catch (System::FormatException^) {
				MessageBox::Show("Errore di input nella text box");		// guardo le eccezioni nel caso nelle textbox non ci siano numeri validi
			}


		}


	}


			/*BOTTONE ANNULLA*/



	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{

		fileinserito = 0;			//riabilito l' inserimento manuale
		textBox1->Enabled = 1;
		textBox2->Enabled = 1;
		textBox3->Enabled = 1;
		textBox4->Enabled = 1;
		textBox5->Enabled = 1;
		textBox6->Enabled = 1;
		textBox7->Enabled = 1;
		textBox12->Text = "";		//pulisco la textbox del file
					
		vector<double>().swap(Sv);  // azzero i vari vettori per liberare la memoria
		vector<double>().swap(Kv);
		vector<double>().swap(rv);
		vector<double>().swap(sigmav);
		vector<double>().swap(timev);
		vector<int>().swap(no_S_stepsv);
		vector<int>().swap(no_t_stepsv);
		
		button2->Enabled = 0;		//disabilito bottone salva e il bottone risultati
		checkBox5->Enabled = 0;
		checkBox6->Enabled = 0;
		checkBox7->Enabled = 0;
		checkBox8->Enabled = 0;
		button5->Enabled = 0;


	}

	public: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	} //vuoto


			/*BOTTONE SALVA*/

	public: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {



		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {	//eseguo la finistra per il salvataggio del file	

			String^ nomeexport = saveFileDialog1->FileName;	//salvo il nome del file per poi utilizzarlo
			bool fileimportcsv = nomeexport->Contains(".csv");	//guardo l' estensione del file per decidere quale classe usare
			bool fileimporttxt = nomeexport->Contains(".txt");
			bool fileimportini = nomeexport->Contains(".ini");

			int expeu = 1;										//inizializzo le variabili per lo switch case
			int expus = 2;
			int impeu = 3;
			int impus = 4;

			try {
				if (fileimportcsv == 1) {							//se il file è in formato csv

					ExportCSV^ expcsv = gcnew ExportCSV;					//creo una classe per l' export in csv
					if (checkBox8->Checked)							//guardo quali risultati devo esportare
					{
						expcsv->exportfile(expeu, risexpeu, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv); //esporto il risultato e i parametri realtivi ad esso inj base alle checkbox spuntate
					}
					if (checkBox7->Checked)
					{
						expcsv->exportfile(expus, risexpus, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv);
					}
					if (checkBox6->Checked)
					{
						expcsv->exportfile(impeu, risimpeu, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv);
					}
					if (checkBox5->Checked)
					{
						expcsv->exportfile(impus, risimpus, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv);
					}


				}
				if (fileimporttxt == 1) {							//se il file è in formato txt

					ExportTXT^ exptxt = gcnew ExportTXT;								//creo una classe per l' export in csv
					if (checkBox8->Checked)							//guardo quali risultati devo esportare
					{
						exptxt->exportfile(expeu, risexpeu, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv); //esporto il risultato e i parametri realtivi ad esso
					}
					if (checkBox7->Checked)
					{
						exptxt->exportfile(expus, risexpus, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv);
					}
					if (checkBox6->Checked)
					{
						exptxt->exportfile(impeu, risimpeu, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv);
					}
					if (checkBox5->Checked)
					{
						exptxt->exportfile(impus, risimpus, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv);
					}

				}
				if (fileimportini == 1) {							//se il file è in formato ini
					ExportINI^ expini = gcnew ExportINI;			//creo una classe per l' export in ini
					if (checkBox8->Checked)							//guardo quali risultati devo esportare
					{
						expini->exportfile(expeu, risexpeu, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv); //esporto il risultato e i parametri realtivi ad esso
					}
					if (checkBox7->Checked)
					{
						expini->exportfile(expus, risexpus, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv);
					}
					if (checkBox6->Checked)
					{
						expini->exportfile(impeu, risimpeu, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv);
					}
					if (checkBox5->Checked)
					{
						expini->exportfile(impus, risimpus, righe, nomeexport, Sv, Kv, rv, sigmav, timev, no_S_stepsv, no_t_stepsv);
					}


				}
			}
			catch (System::IO::IOException^) {
				MessageBox::Show("File gia aperto in un altro programma!");
			}
		}
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {}


			 //PULSANTE RISULTATI

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		Risultati^ second = gcnew Risultati();			// creo un oggetto che fa riferimento alla seconda form
		
			if (checkBox1->Checked == 1)																			//guardo quali calcoli ho eseguiti
			{
				second->richTextBox1->AppendText("---------RISULTATI ESPLICITI EUROPEI---------\n");
				for (int i = 0; i < righe; i++) {
					second->richTextBox1->AppendText("I dati sono: S= " + System::Convert::ToString(Sv[i])			// scrivo nella textbox i vari risultati e dati
						+ " K= " + System::Convert::ToString(Kv[i])
						+ " r= " + System::Convert::ToString(rv[i])
						+ " sigma= " + System::Convert::ToString(sigmav[i])
						+ " time= " + System::Convert::ToString(timev[i])
						+ " no_S_steps= " + System::Convert::ToString(no_S_stepsv[i])
						+ " no_t_steps= " + System::Convert::ToString(no_t_stepsv[i] + "\n"));

					second->richTextBox1->AppendText("Il risultato è: " + System::Convert::ToString(risexpeu[i]) + "\n\n");
				}
			}

			if (checkBox2->Checked == 1)
			{
				second->richTextBox1->AppendText("---------RISULTATI ESPLICITI AMERICANI---------\n");					//guardo quali calcoli ho eseguiti
				for (int i = 0; i < righe; i++) {
					second->richTextBox1->AppendText("I dati sono: S=" + System::Convert::ToString(Sv[i])				// scrivo nella textbox i vari risultati e dati
						+ " K= " + System::Convert::ToString(Kv[i])
						+ " r= " + System::Convert::ToString(rv[i])
						+ " sigma= " + System::Convert::ToString(sigmav[i])
						+ " time= " + System::Convert::ToString(timev[i])
						+ " no_S_steps= " + System::Convert::ToString(no_S_stepsv[i])
						+ " no_t_steps= " + System::Convert::ToString(no_t_stepsv[i] + "\n"));

					second->richTextBox1->AppendText("Il risultato è: " + System::Convert::ToString(risexpus[i]) + "\n\n");
				}
			}

			if (checkBox3->Checked == 1)
			{
				second->richTextBox1->AppendText("---------RISULTATI IMPLICITI EUROPEI---------\n");					//guardo quali calcoli ho eseguiti
				for (int i = 0; i < righe; i++) {
					second->richTextBox1->AppendText("I dati sono: S=" + System::Convert::ToString(Sv[i])				// scrivo nella textbox i vari risultati e dati
						+ " K= " + System::Convert::ToString(Kv[i])
						+ " r= " + System::Convert::ToString(rv[i])
						+ " sigma= " + System::Convert::ToString(sigmav[i])
						+ " time= " + System::Convert::ToString(timev[i])
						+ " no_S_steps= " + System::Convert::ToString(no_S_stepsv[i])
						+ " no_t_steps= " + System::Convert::ToString(no_t_stepsv[i] + "\n"));

					second->richTextBox1->AppendText("Il risultato è: " + System::Convert::ToString(risimpeu[i]) + "\n\n");
				}
			}

			if (checkBox4->Checked == 1)
			{
				second->richTextBox1->AppendText("---------RISULTATI IMPLICITI AMERICANI---------\n");						//guardo quali calcoli ho eseguiti
				for (int i = 0; i < righe; i++) {
					second->richTextBox1->AppendText("I dati sono: S=" + System::Convert::ToString(Sv[i])					// scrivo nella textbox i vari risultati e dati
						+ " K= " + System::Convert::ToString(Kv[i])
						+ " r= " + System::Convert::ToString(rv[i])
						+ " sigma= " + System::Convert::ToString(sigmav[i])
						+ " time= " + System::Convert::ToString(timev[i])
						+ " no_S_steps= " + System::Convert::ToString(no_S_stepsv[i])
						+ " no_t_steps= " + System::Convert::ToString(no_t_stepsv[i] + "\n"));

					second->richTextBox1->AppendText("Il risultato è: " + System::Convert::ToString(risimpus[i]) + "\n\n");
				}
			}
		
		
	
		second->ShowDialog();
		second->richTextBox1->Text = ""; // pulisco la textbox alla fine per riscrivere nuovi risultati in caso di un altro inserimento
	
	};
	};
}