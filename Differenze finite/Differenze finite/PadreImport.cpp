#include "PadreImport.h"




PadreImport::PadreImport(System::String^ file) {
	nome = file;

	System::IO::StreamReader^ din = System::IO::File::OpenText(nome);

	try {

		System::Diagnostics::Debug::WriteLine("File Aperto");


		System::String^ str;
		while ((str = din->ReadLine()) != nullptr) {      //leggo numero di righe di valori
			contatore++;
		}

		System::Diagnostics::Debug::WriteLine(contatore);


		size_t newsize = contatore;
		// creo nuove variabili temporanee su cui allochero' le vecchie variabili


		SS.resize(newsize);
		SK.resize(newsize);
		Sr.resize(newsize);
		Ssigma.resize(newsize);
		Stime.resize(newsize);
		Sno_s_steps.resize(newsize);
		Sno_t_steps.resize(newsize);

		S.resize(newsize);
		K.resize(newsize);
		r.resize(newsize);
		sigma.resize(newsize);
		time.resize(newsize);
		no_s_steps.resize(newsize);
		no_t_steps.resize(newsize);

		num_righe = newsize;

	}


	catch (System::Exception^ e)
	{
		if (dynamic_cast<System::IO::FileNotFoundException^>(e)) {}
		//Console::WriteLine("file '{0}' not found", "asd");
		else {}
		//Console::WriteLine("problem reading file '{0}'", "asd");
	}

}

