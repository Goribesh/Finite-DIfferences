#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "CSVimport.h"
#include "TXTimport.h"
#include "Differenze_finite_esplicite.h"
#include "CSVexport.h"




int main()
{


	parametriCSV inputcsv("CSVinput.csv"); // definizione delle classi di input da file
	parametriTXT inputtxt("TXTinput.txt");
	inputcsv.leggifile();
	inputtxt.leggifile();
	Differenze_finite_esplicite prova;
	int righe = inputcsv.contatore;
	vector<double> rexpeur(righe);			// vettore per risultati
	for (int i = 0; i < righe; i++) {		// eseguo l algoritmo per tutte le letture
		//cout << righe << endl;
		rexpeur[i] = prova.option_price_put_european_finite_diff_explicit(inputcsv.S[i], inputcsv.K[i], inputcsv.r[i], inputcsv.sigma[i], inputcsv.time[i], inputcsv.no_s_steps[i], inputcsv.no_t_steps[i]);
		cout << rexpeur[i] << endl;

	}
	CSVexport outputcsv;
	outputcsv.out(rexpeur,righe);

	//double pro = prova.option_price_put_european_finite_diff_explicit (50.0, 50.0, 0.1, 0.4, 0.4167, 20, 11);
	//cout << pro << endl << endl; // prova european
	//Differenze_finite_esplicite prova2;
	//pro = prova.option_price_put_american_finite_diff_explicit(50.0, 50.0, 0.1, 0.4, 0.4167, 20, 11);
	//cout << pro << endl << endl; // prova american
	
	system("PAUSE");

}