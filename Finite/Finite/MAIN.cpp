#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "CSVimport.h"





int main()
{


	parametriCSV input("CSVinput.csv");


	input.leggifile(); // prova file, questo alla fine sara un file con sola classe senza main

	system("PAUSE");

}