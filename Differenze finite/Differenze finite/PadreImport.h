#pragma once
#include<string>
#include <fstream>
#include <iostream>
#include <vector>
#include <cliext/vector>
#using<system.dll>  

using namespace std;



ref class PadreImport
{
public:

	PadreImport( System::String^ file);// costruttore, prende in ingresso il nome del file di import
	size_t contatore = 0;
	size_t num_righe = 0;
	System::String^ nome;

	cliext::vector<System::String^> SS;
	cliext::vector<System::String^> SK;
	cliext::vector<System::String^> Sr;
	cliext::vector<System::String^> Ssigma;
	cliext::vector<System::String^> Stime;
	cliext::vector<System::String^> Sno_s_steps;
	cliext::vector<System::String^> Sno_t_steps;

	cliext::vector<double> S;
	cliext::vector<double> K;
	cliext::vector<double> r;
	cliext::vector<double> sigma;
	cliext::vector<double> time;
	cliext::vector<int> no_s_steps;
	cliext::vector<int> no_t_steps;


};

