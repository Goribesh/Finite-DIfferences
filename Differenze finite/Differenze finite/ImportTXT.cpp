
#include"ImportTXT.h"

using namespace std;

void parametriTXT::leggifile() {

	System::IO::StreamReader^ din = System::IO::File::OpenText(PadreImport::nome);
	System::String^ tempstring;
	cli::array<System::String^>^ pezzi;
	for (int i = 0; i < PadreImport::num_righe; i++) {
		tempstring = din->ReadLine();
		if (!System::String::IsNullOrEmpty(tempstring)) 
		{
			
			pezzi = tempstring->Split(',');

			PadreImport::SS[i] = pezzi[0];
			PadreImport::SK[i] = pezzi[1];
			PadreImport::Sr[i] = pezzi[2];
			PadreImport::Ssigma[i] = pezzi[3];
			PadreImport::Stime[i] = pezzi[4];
			PadreImport::Sno_s_steps[i] = pezzi[5];
			PadreImport::Sno_t_steps[i] = pezzi[6];


			PadreImport::S[i] = System::Convert::ToDouble(PadreImport::SS[i]);
			PadreImport::K[i] = System::Convert::ToDouble(PadreImport::SK[i]);
			PadreImport::r[i] = System::Convert::ToDouble(PadreImport::Sr[i]);
			PadreImport::sigma[i] = System::Convert::ToDouble(PadreImport::Ssigma[i]);
			PadreImport::time[i] = System::Convert::ToDouble(PadreImport::Stime[i]);
			PadreImport::no_s_steps[i] = System::Convert::ToInt32(PadreImport::Sno_s_steps[i]);
			PadreImport::no_t_steps[i] = System::Convert::ToInt32(PadreImport::Sno_t_steps[i]);
		}
		else { i--; }																	// nel caso la mia stringa sia vuota torno indietro di un i in modod da non perdere una riga



	}
}


