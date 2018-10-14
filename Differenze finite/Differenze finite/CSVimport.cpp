// file per importazione di un file csv, il file comprende i parametriCSV: S, K, r, sigma, time, no_s_steps, no_t_step
//separati da una virgola

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "CSVimport.h"
using namespace std;



/*parametriCSV::parametriCSV(const string file)		// costruttore ricrea array dinamicamente
{	
	nome = file;
	string empty;
	fstream file_param;
	file_param.open(file);  //apertura file 
	if (file_param.is_open())
	{
		cout << file << endl;

		while (getline(file_param, empty)) {      //leggo numero di righe di valori
			contatore++;
		}
		cout << "Sono state trovate " << contatore << " righe" << endl<<endl;

		file_param.close();
	
		if (contatore == 0) {
			cout << "File vuoto ricontrollare" << endl;
			system("PAUSE");
			exit(0);
		}

		//if (contatore > num_righe)
		//{
		
			size_t newsize = contatore;
			// creo nuove variabili temporanee su cui allochero' le vecchie variabili
			vector <double> newresult(newsize);
			string *newSS = new string[newsize];
			string *newSK = new string[newsize];
			string *newSr = new string[newsize];
			string *newSsigma = new string[newsize];
			string *newStime = new string[newsize];
			string *newSno_s_steps = new string[newsize];
			string *newSno_t_steps = new string[newsize];


			double *newS = new double[newsize];
			double *newK = new double[newsize];
			double *newr = new double[newsize];
			double *newsigma = new double[newsize];
			double *newtime = new double[newsize];
			int *newno_s_steps = new int[newsize];
			int *newno_t_steps = new int[newsize];



			// copio il vecchio array nel nuovo

			/*memcpy(newSS, SS, num_righe);
			memcpy(newSK, SK, num_righe);
			memcpy(newSr, Sr, num_righe);
			memcpy(newSsigma, Ssigma, num_righe);
			memcpy(newStime, Stime, num_righe);
			memcpy(newSno_s_steps, Sno_s_steps, num_righe);
			memcpy(newSno_t_steps, Sno_t_steps, num_righe);
			

			memcpy(newS, S, num_righe);
			memcpy(newK, S, num_righe);
			memcpy(newr, r, num_righe);
			memcpy(newsigma, sigma, num_righe);
			memcpy(newtime, time, num_righe);
			memcpy(newno_s_steps, no_s_steps, num_righe);
			memcpy(newno_t_steps, no_t_steps, num_righe);

			num_righe = newsize;
		

			// cancello le aree di memoria vecchie
			delete[] SS, SK, Sr, Ssigma, Stime, Sno_s_steps, Sno_t_steps;
			delete[] S, K, r, sigma, time, no_s_steps, no_t_steps;


			// faccio puntare i vecchi puntatori alle nuove aree per mantenere i nomi
			SS = newSS;
			SK = newSK;
			Sr = newSr;
			Ssigma = newSsigma;
			Stime = newStime;
			Sno_s_steps = newSno_s_steps;
			Sno_t_steps = newSno_t_steps;

			S = newS;
			K = newK;
			r = newr;
			sigma = newsigma;
			time = newtime;
			no_s_steps = newno_s_steps;
			no_t_steps = newno_t_steps;
			
		//}

		

	}

	else
	{
		cout << "File CSV mancante assicurarsi che si chiami CSVimport.csv e riprovare, chiusura programma" << endl;
		system("PAUSE");
		exit(0);

	}
}*/


void parametriCSV::leggifile() {

	System::IO::StreamReader^ din = System::IO::File::OpenText(PadreImport::nome);
	System::String^ tempstring;
	cli::array<System::String^>^ pezzi;
	cli::array<System::String^>^ stringcompare = gcnew cli::array<System::String^>  (1);
	stringcompare[0] = ";", "\n" ;
	for (int i = 0; i < PadreImport::num_righe; i++) {
		tempstring = din->ReadLine();
		System::Diagnostics::Debug::WriteLine(tempstring);
		pezzi= tempstring->Split(';');
		PadreImport::SS[i] = pezzi[0];

		PadreImport::SK[i] = pezzi[1];

		PadreImport::Sr[i] = pezzi[2];

		PadreImport::Ssigma[i] = pezzi[3];

		PadreImport::Stime[i] = pezzi[4];
		
		PadreImport::Sno_s_steps[i] = pezzi[5];
		
		PadreImport::Sno_t_steps[i] = pezzi[6];


		PadreImport::S[i] = System::Convert::ToDouble(PadreImport::SS[i]);
		PadreImport::K[i] = System::Convert::ToDouble(PadreImport::SK[i]);
		PadreImport::r[i] = System::Convert::ToDouble(PadreImport::Sr[i]);
		PadreImport::sigma[i] = System::Convert::ToDouble(PadreImport::Ssigma[i]);
		PadreImport::time[i] = System::Convert::ToDouble(PadreImport::Stime[i]);
		PadreImport::no_s_steps[i] = System::Convert::ToInt32(PadreImport::Sno_s_steps[i]);
		PadreImport::no_t_steps[i] = System::Convert::ToInt32(PadreImport::Sno_t_steps[i]);





	}
}


