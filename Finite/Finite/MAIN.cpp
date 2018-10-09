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
	double pro = prova.option_price_put_european_finite_diff_explicit(50.0, 50.0, 0.1, 0.4, 0.4167, 20, 11);
	cout << pro << endl << endl;
	inputcsv.leggifile(); 
	inputtxt.leggifile();
	system("PAUSE");

}