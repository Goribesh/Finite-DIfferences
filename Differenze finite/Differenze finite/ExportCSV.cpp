#include "ExportCSV.h"



 void ExportCSV::exportfile(int tipo,vector<double> vec, int righe, System::String^ file, vector <double> Sexp,
																				 vector <double> Kexp,
																				 vector <double> rexp,
																				 vector <double> sigmaexp,
																				 vector <double> timeexp,
																				 vector <int> no_S_stepsexp,
																				 vector <int> no_t_stepsexp )
 
 
 {

	 System::IO::StreamWriter^ out = gcnew System::IO::StreamWriter(file,true);
	 if (righe != 0) {
		 switch (tipo) {
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

		 for (int i = 0; i < righe; i++) {
			 System::Diagnostics::Debug::WriteLine(vec[i]);
			 out->WriteLine("Dati: S=" + Sexp[i] + " K=" + Kexp[i] + " r=" + rexp[i] + " sigma=" + sigmaexp[i] + " time=" + timeexp[i] + " no_S_steps=" + no_S_stepsexp[i] + " no_t_steps=" + no_t_stepsexp[i]);
			 out->WriteLine("Il risultato e' " + vec[i]);

		 }
	 }
	 out->Close();
 };