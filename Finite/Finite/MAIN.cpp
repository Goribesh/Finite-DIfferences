#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "CSVimport.h"
#include "TXTimport.h"
#include "Differenze_finite_esplicite.h"




int main()
{


	parametriCSV inputcsv("CSVinput.csv"); // definizione delle classi di input da file
	parametriTXT inputtxt("TXTinput.txt");

	Differenze_finite_esplicite prova;
	int righe = inputcsv.contatore;
	vector<double> r(50);
	/*for (int i = 0; i < righe; i++) {
		cout << righe << endl;
		r[i] = prova.option_price_put_european_finite_diff_explicit(inputcsv.S[i], inputcsv.K[i], inputcsv.r[i], inputcsv.sigma[i], inputcsv.time[i], inputcsv.no_s_steps[i], inputcsv.no_t_steps[i]);
		cout << r[i] << endl;

	}*/

	double pro = prova.option_price_put_european_finite_diff_explicit (50.0, 50.0, 0.1, 0.4, 0.4167, 20, 11);
	cout << pro << endl << endl; // prova european
	Differenze_finite_esplicite prova2;
	pro = prova.option_price_put_american_finite_diff_explicit(50.0, 50.0, 0.1, 0.4, 0.4167, 20, 11);
	cout << pro << endl << endl; // prova american
	inputcsv.leggifile(); 
	inputtxt.leggifile();
	system("PAUSE");

}