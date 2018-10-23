#include "ExportINI.h"



void ExportINI::exportfile(int tipo, vector<double> vec,size_t righe, System::String^ file, vector <double> Sexp,								//prendo i parametri in ingresso
																							vector <double> Kexp,
																							vector <double> rexp,
																							vector <double> sigmaexp,
																							vector <double> timeexp,
																							vector <int> no_S_stepsexp,
																							vector <int> no_t_stepsexp)


{

	System::IO::StreamWriter^ out = gcnew System::IO::StreamWriter(file,true);						//apro lo streamwriter in modalita appendice

	if (righe != 0) {//nel caso le righe non siano 0
		switch (tipo) {//effettuo uno switch per vedere quali risultati andro a scrivere
		case 1:
			out->WriteLine("--------------RISULTATI ESPLICITI EUROPEI--------------");
			break;
		case 2:
			out->WriteLine("--------------RISULTATI ESPLICITI AMERICANI--------------");
			break;
		case 3:
			out->WriteLine("--------------RISULTATI IMPLICITI EUROPEI--------------");
			break;
		case 4:
			out->WriteLine("--------------RISULTATI IMPLICITI AMERICANI--------------");
			break;
		}

		for (int i = 0; i < righe; i++) {//scrivo nel file un numero di volte pare alle righe
			out->WriteLine("Dati: S=" + Sexp[i] + " K=" + Kexp[i] + " r=" + rexp[i] + " sigma=" + sigmaexp[i] + " time=" + timeexp[i] + " no_S_steps=" + no_S_stepsexp[i] + " no_t_steps=" + no_t_stepsexp[i]);// scrivo i dati nel file
			out->WriteLine("Il risultato e' " + vec[i]); // scrivo i risultati

		}
	}
	out->Close();// chiudo il file
};