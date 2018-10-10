#include "pch.h"
#include "CSVexport.h"
using namespace std;


void CSVexport::out(vector<double> r,int righe)
{
	fstream output;
	output.open("CSVexport.csv");
	if (!output.is_open())
	{
		ofstream output{ "CSVexport.csv" };
		output.open("CSVexport.csv");
	}
	cout << sizeof(righe);
	for (int i = 0; i < righe; i++)
	{
		cout <<r[i] << endl;
		output << "Il risultato numero " << i << "e' " << r[i] << endl;

	}

}
