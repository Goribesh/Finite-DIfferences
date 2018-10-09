#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "CSVimport.h"
#include "TXTimport.h"




int main()
{


	parametriCSV inputcsv("CSVinput.csv"); // definizione delle classi di input da file
	parametriTXT inputtxt("TXTinput.txt");

	inputcsv.leggifile(); 
	inputtxt.leggifile();
	system("PAUSE");

}