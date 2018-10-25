#pragma once

#include <vector>
#include "PadreImport.h"
using namespace std;



ref class parametriINI :public PadreImport			//classe figlia di PadreImport
{
public:
	parametriINI(System::String^ file) : PadreImport(file) {};			//uso il costruttore definito della classe padre

	void leggifile();			// legge parametriCSV dal file






	









};

