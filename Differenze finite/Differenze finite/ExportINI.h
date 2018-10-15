#pragma once
#include "PadreExport.h"
#include<vector>

using namespace std;

ref class ExportINI :public PadreExport
{
public:
	virtual void exportfile(int tipo, vector<double> vec, int righe, System::String^ file, vector <double> Sexp,
		vector <double> Kexp,
		vector <double> rexp,
		vector <double> sigmaexp,
		vector <double> timeexp,
		vector <int> no_S_stepsexp,
		vector <int> no_t_stepsexp) override;
};

