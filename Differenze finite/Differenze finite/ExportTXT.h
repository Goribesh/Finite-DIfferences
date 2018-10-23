#pragma once
#include "PadreExport.h"
#include<vector>
using namespace std;

ref class ExportTXT : public PadreExport		//classe figlia di padreexport
{
public:
	virtual void exportfile(int tipo, vector<double> vec, size_t righe, System::String^ file,   vector <double> Sexp,				// effettuo l' override della funzione della classe padre		POLIMORFISMO
																								vector <double> Kexp,
																								vector <double> rexp,
																								vector <double> sigmaexp,
																								vector <double> timeexp,
																								vector <int> no_S_stepsexp,
																								vector <int> no_t_stepsexp) override;
};

