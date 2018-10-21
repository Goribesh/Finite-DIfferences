// file per importazione di un file INI, il file comprende i parametriINI: S, K, r, sigma, time, no_s_steps, no_t_step
//separati da uno spazio


#include "importINI.h"
using namespace std;


void parametriINI::leggifile() {

	System::IO::StreamReader^ din = System::IO::File::OpenText(PadreImport::nome);				//apro il file per la lettura
	System::String^ tempstring;																	//creo una stringa per allocare temporaneamente la stringa letta dal file
	cli::array<System::String^>^ pezzi;															//creo un array di stringhe su cui salvare i miei parametri

	try {
		for (int i = 0; i < PadreImport::num_righe; i++) {											//leggo tutte le righe del file
			tempstring = din->ReadLine();															//leggo la riga e la salvo nella stringa temporanea
			if (!System::String::IsNullOrEmpty(tempstring)) {										//nel caso la stringa sia diversa da zero eseguo la divisione e il salvataggio dei parametri

				pezzi = tempstring->Split(' ');													//divido la mia stringa sui punti e verigola salvando ogni pezzo nel modo indicato nel vettore pezzi

				PadreImport::SS[i] = pezzi[0];													// salvo ogni parametro nella stringa corrispondente per la futura conversione in double o int
				PadreImport::SK[i] = pezzi[1];
				PadreImport::Sr[i] = pezzi[2];
				PadreImport::Ssigma[i] = pezzi[3];
				PadreImport::Stime[i] = pezzi[4];
				PadreImport::Sno_s_steps[i] = pezzi[5];
				PadreImport::Sno_t_steps[i] = pezzi[6];


				PadreImport::S[i] = System::Convert::ToDouble(PadreImport::SS[i]);				//salvo i valore nei vettori double o int corrispondenti
				PadreImport::K[i] = System::Convert::ToDouble(PadreImport::SK[i]);
				PadreImport::r[i] = System::Convert::ToDouble(PadreImport::Sr[i]);
				PadreImport::sigma[i] = System::Convert::ToDouble(PadreImport::Ssigma[i]);
				PadreImport::time[i] = System::Convert::ToDouble(PadreImport::Stime[i]);
				PadreImport::no_s_steps[i] = System::Convert::ToInt32(PadreImport::Sno_s_steps[i]);
				PadreImport::no_t_steps[i] = System::Convert::ToInt32(PadreImport::Sno_t_steps[i]);
			}
			else { i--; }
		}
	}
	catch (System::IndexOutOfRangeException^ e) {										// controllo le eccezioni per gli errori nei vettori
		System::Windows::Forms::MessageBox::Show("Errore nel file di input, controllare la sintassi e che i separatori siano punti e verigola.\nPREMERE ANNULLA E RIPROVARE");
		PadreImport::SS.clear();
		PadreImport::SK.clear();
		PadreImport::Sr.clear();
		PadreImport::Ssigma.clear();
		PadreImport::Stime.clear();
		PadreImport::Sno_s_steps.clear();
		PadreImport::Sno_t_steps.clear();

		PadreImport::S.clear();
		PadreImport::K.clear();
		PadreImport::r.clear();
		PadreImport::sigma.clear();
		PadreImport::time.clear();
		PadreImport::no_s_steps.clear();
		PadreImport::no_t_steps.clear();

		PadreImport::contatore = 0;

	}
}


