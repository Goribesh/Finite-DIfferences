#include "pch.h"
#include "TXTimport.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


parametriTXT::parametriTXT(const string file)		// costruttore ricrea array dinamicamente
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
		cout << "Sono state trovate " << contatore << " righe" << endl << endl;

		file_param.close();



		//if (contatore > num_righe)
		//{

			size_t newsize = contatore;
			// creo nuove variabili temporanee su cui allochero' le vecchie variabili
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
			double *newno_s_steps = new double[newsize];
			double *newno_t_steps = new double[newsize];



			// copio il vecchio array nel nuovo
			/*
			memcpy(newSS, SS, num_righe);
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
			*/
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
		cout << "File TXT mancante assicurarsi che si chiami CSVimport.csv e riprovare, chiusura programma" << endl;
		system("PAUSE");
		exit(0);

	}
}


void parametriTXT::leggifile() {
	fstream file_param;
	file_param.open(nome);  //apertura file 


	for (int i = 0; i < num_righe; i++) {
		getline(file_param, SS[i], ' '); // lettura del valore S
		S[i] = stod(SS[i]);
		cout << "S" << i + 1 << "= " << S[i] << endl;

		getline(file_param, SK[i], ' '); // lettura del valore K
		K[i] = stod(SK[i]);
		cout << "K" << i + 1 << "= " << K[i] << endl;

		getline(file_param, Sr[i], ' '); // lettura del valore r
		r[i] = stod(Sr[i]);
		cout << "r" << i + 1 << "= " << r[i] << endl;

		getline(file_param, Ssigma[i], ' '); // lettura del valore sigma
		sigma[i] = stod(Ssigma[i]);
		cout << "sigma" << i + 1 << "= " << sigma[i] << endl;

		getline(file_param, Stime[i], ' '); // lettura del valore time
		time[i] = stod(Stime[i]);
		cout << "time" << i + 1 << "= " << time[i] << endl;

		getline(file_param, Sno_s_steps[i], ' '); // lettura del valore no_s_stepss
		no_s_steps[i] = stod(Sno_s_steps[i]);
		cout << "no_s_steps" << i + 1 << "= " << no_s_steps[i] << endl;

		getline(file_param, Sno_t_steps[i], '\n'); // lettura del valore no_t_steps
		no_t_steps[i] = stod(Sno_t_steps[i]);
		cout << "no_t_steps" << i + 1 << "= " << no_t_steps[i] << endl << "numero " << i + 1 << endl << endl;


	}
	file_param.close();
}