// file per importazione di un file csv, il file comprende i parametriCSV: S, K, r, sigma, time, no_s_steps, no_t_step
//separati da una virgola


#include "CSVimport.h"
using namespace std;


void parametriCSV::leggifile() {

	System::IO::StreamReader^ din = System::IO::File::OpenText(PadreImport::nome);				//apro il file per la lettura
	System::String^ tempstring;																	//creo una stringa per allocare temporaneamente la stringa letta dal file
	cli::array<System::String^>^ pezzi;															//creo un array di stringhe su cui salvare i miei parametri


	for (int i = 0; i < PadreImport::num_righe; i++) {											//leggo tutte le righe del file
		tempstring = din->ReadLine();															//leggo la riga e la salvo nella stringa temporanea
		if (!System::String::IsNullOrEmpty(tempstring)) {										//nel caso la stringa sia diversa da zero eseguo la divisione e il salvataggio dei parametri

			pezzi = tempstring->Split(';');													//divido la mia stringa sui punti e verigola salvando ogni pezzo nel modo indicato nel vettore pezzi

			SS[i] = pezzi[0];													// salvo ogni parametro nella stringa corrispondente per la futura conversione in double o int
			SK[i] = pezzi[1];
			Sr[i] = pezzi[2];
			Ssigma[i] = pezzi[3];
			Stime[i] = pezzi[4];
			Sno_s_steps[i] = pezzi[5];
			Sno_t_steps[i] = pezzi[6];


			S[i] = System::Convert::ToDouble(SS[i]);				//salvo i valore nei vettori double o int corrispondenti
			K[i] = System::Convert::ToDouble(SK[i]);
			r[i] = System::Convert::ToDouble(Sr[i]);
			sigma[i] = System::Convert::ToDouble(Ssigma[i]);
			time[i] = System::Convert::ToDouble(Stime[i]);
			no_s_steps[i] = System::Convert::ToInt32(Sno_s_steps[i]);
			no_t_steps[i] = System::Convert::ToInt32(Sno_t_steps[i]);
		}
		else { i--; }																	// nel caso la mia stringa sia vuota torno indietro di un i in modod da non perdere una riga

	}
	din->Close();
	delete din;
	
}




	



