#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "CSVimport.h"
#include "TXTimport.h"




int main()
{


	parametriCSV inputcsv("CSVinput.csv");
	parametriTXT inputtxt("TXTinput.txt");

	inputcsv.leggifile(); // prova file, questo alla fine sara un file con sola classe senza main
	inputtxt.leggifile();
	system("PAUSE");

}