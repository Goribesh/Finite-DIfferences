#pragma once

#include <vector>
#include "PadreImport.h"
using namespace std;



 ref class parametriCSV : public PadreImport		//classe figlia di PadreImport
{
public:
	parametriCSV(System::String^ file) : PadreImport(file) {};		//uso il costruttore definito della classe padre

	void leggifile();			// legge parametriCSV dal file
	





	
	

	





};

