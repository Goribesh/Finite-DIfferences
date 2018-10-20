#pragma once
#include<vector>

using namespace std;


ref class PadreExport			//creo la classe padre 
{
public:
	
	virtual void exportfile(int tipo,vector<double> vec,int righe, System::String^ file,vector <double> Sexp,		// creo una funzione virtual per sfruttare il polimorfismo nelle classi figlie
																						vector <double> Kexp,
																						vector <double> rexp,
																						vector <double> sigmaexp,
																						vector <double> timeexp,
																						vector <int> no_S_stepsexp,
																						vector <int> no_t_stepsexp);


};

