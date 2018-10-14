#pragma once
#include <string>
#include "Differenze_esplicite.h"
#include "PadreImport.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "CSVimport.h"
#include "CSVexport.h"
#include <vector>
#include "differenze_implicite.h"

int righe = 0;
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
			this->button2->Location = System::Drawing::Point(526, 558);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SALVA";
			this->button2->UseVisualStyleBackColor = true;
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
			this->textBox1->Location = System::Drawing::Point(148, 283);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"50.0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(204, 283);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(55, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"50.0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(260, 283);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(55, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"0.1";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(316, 283);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(55, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"0.4";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(372, 283);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"0.4167";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(428, 283);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(55, 20);
			this->textBox6->TabIndex = 8;
			this->textBox6->Text = L"20";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(484, 283);
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
			this->label4->Location = System::Drawing::Point(316, 267);
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
			this->label1->Location = System::Drawing::Point(372, 267);
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
			this->label2->Location = System::Drawing::Point(428, 267);
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
			this->label3->Location = System::Drawing::Point(484, 267);
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
			this->label5->Location = System::Drawing::Point(260, 267);
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
			this->label6->Location = System::Drawing::Point(204, 267);
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
			this->label7->Location = System::Drawing::Point(148, 267);
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
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(266, 110);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(158, 17);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L"Differenze finite esplicite EU";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(266, 133);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(158, 17);
			this->checkBox2->TabIndex = 21;
			this->checkBox2->Text = L"Differenze finite esplicite US";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(266, 156);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(157, 17);
			this->checkBox3->TabIndex = 22;
			this->checkBox3->Text = L"Differenze finite implicite EU";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(266, 179);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(157, 17);
			this->checkBox4->TabIndex = 23;
			this->checkBox4->Text = L"Differenze finite implicite US";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(461, 435);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(110, 20);
			this->textBox8->TabIndex = 27;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(349, 435);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(110, 20);
			this->textBox9->TabIndex = 26;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(236, 435);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(110, 20);
			this->textBox10->TabIndex = 25;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(124, 435);
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
			this->label8->Location = System::Drawing::Point(127, 419);
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
			this->label9->Location = System::Drawing::Point(239, 419);
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
			this->label10->Location = System::Drawing::Point(351, 419);
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
			this->label11->Location = System::Drawing::Point(462, 419);
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
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 629);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"FormMain";
			this->Text = L"Differenze Finite";
			this->Load += gcnew System::EventHandler(this, &FormMain::FormMain_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormMain_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	public: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		msclr::interop::marshal_context context;
		
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			openFileDialog1->OpenFile();
			textBox12->Text = openFileDialog1->FileName;
			String^ Snome_file = openFileDialog1->SafeFileName;
			fileinserito = 1;
			parametriCSV inputcsv(Snome_file);
			inputcsv.leggifile();
			System::Diagnostics::Debug::WriteLine(inputcsv.nome);
			MessageBox::Show("Import file effettuato");
			textBox1->Enabled = 0;
			textBox2->Enabled = 0;
			textBox3->Enabled = 0;
			textBox4->Enabled = 0;
			textBox5->Enabled = 0;
			textBox6->Enabled = 0;
			textBox7->Enabled = 0;
			righe = inputcsv.contatore;


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

		
		
			

			//label12->Text = righe.ToString();

			for (int i = 0; i < righe; i++) {
				Sv[i] = inputcsv.S[i];						
				Kv[i] = inputcsv.K[i];			
				rv[i] = inputcsv.r[i];
				sigmav[i] = inputcsv.sigma[i];
				timev[i] = inputcsv.time[i];
				no_S_stepsv[i] = inputcsv.no_s_steps[i];
				no_t_stepsv[i] = inputcsv.no_t_steps[i];


			}



		}
		
	}
public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked || fileinserito ==1) 
	{
		
		for (int i = 0; i < righe; i++) 
		{
			Differenze_esplicite expeu;
			
			expeu.SetVariabili(Sv[i], Kv[i], rv[i], sigmav[i], timev[i], no_S_stepsv[i], no_t_stepsv[i]);
			risexpeu[i] = expeu.option_price_put_european_finite_diff_explicit();
			cout << risexpeu[i] << endl;
		}
	

	}
	if (checkBox2->Checked  || fileinserito == 1)
	{
		Differenze_esplicite expus;
		
		for (int i = 0; i < righe; i++) 
		{
			expus.SetVariabili(Sv[i], Kv[i], rv[i], sigmav[i], timev[i], no_S_stepsv[i], no_t_stepsv[i]);
			risexpus[i] = expus.option_price_put_american_finite_diff_explicit();
			cout << risexpus[i] << endl;
		}
	
	

	}
	if (checkBox3->Checked  || fileinserito == 1)
	{
		differenze_implicite impeu;
		
		for (int i = 0; i < righe; i++)
		{
			impeu.SetVariabili(Sv[i], Kv[i], rv[i], sigmav[i], timev[i], no_S_stepsv[i], no_t_stepsv[i]);
			risimpeu[i] = impeu.option_price_put_european_finite_diff_implicit();
			cout << risimpeu[i] << endl;
		}
	}
	if (checkBox4->Checked || fileinserito == 1)
	{
		differenze_implicite impus;
		for (int i = 0; i < righe; i++) 
		{
			impus.SetVariabili(Sv[i], Kv[i], rv[i], sigmav[i], timev[i], no_S_stepsv[i], no_t_stepsv[i]);
			risimpus[i] = impus.option_price_put_american_finite_diff_implicit();
			cout << risimpus[i] << endl;
		}
	}
	if (fileinserito==0) {

		double Sman = System::Convert::ToDouble(textBox1->Text);
		double Kman = System::Convert::ToDouble(textBox2->Text);
		double rman = System::Convert::ToDouble(textBox3->Text);
		double sigmaman = System::Convert::ToDouble(textBox4->Text);
		double timeman = System::Convert::ToDouble(textBox5->Text);
		int no_s_stepsman = System::Convert::ToDouble(textBox6->Text);
		int no_t_stepsman = System::Convert::ToDouble(textBox7->Text);


		if (checkBox1->Checked == 1)
		{
			Differenze_esplicite expman;
			expman.SetVariabili(Sman, Kman, rman, sigmaman, timeman, no_s_stepsman, no_t_stepsman);
			double risexpeuman = expman.option_price_put_european_finite_diff_explicit();
			cout << risexpeuman << endl;
			textBox11->Text = System::Convert::ToString(risexpeuman);

		}
		if (checkBox2->Checked == 1)
		{
			Differenze_esplicite expman2;
			expman2.SetVariabili(Sman, Kman, rman, sigmaman, timeman, no_s_stepsman, no_t_stepsman);
			double risexpusman = expman2.option_price_put_american_finite_diff_explicit();
			cout << risexpusman << endl;
			textBox10->Text = System::Convert::ToString(risexpusman);

		}
		if (checkBox3->Checked == 1)
		{
			differenze_implicite impman;
			impman.SetVariabili(Sman, Kman, rman, sigmaman, timeman, no_s_stepsman, no_t_stepsman);
			double risimpeuman = impman.option_price_put_european_finite_diff_implicit();
			cout << risimpeuman << endl;
			textBox9->Text = System::Convert::ToString(risimpeuman);

		}
		if (checkBox4->Checked == 1)
		{
			differenze_implicite impman2;
			impman2.SetVariabili(Sman, Kman, rman, sigmaman, timeman, no_s_stepsman, no_t_stepsman);
			double risimpusman = impman2.option_price_put_american_finite_diff_implicit();
			cout << risimpusman << endl;
			textBox8->Text = System::Convert::ToString(risimpusman);

		}



	}
}
};
}
