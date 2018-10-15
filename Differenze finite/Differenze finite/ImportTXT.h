#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "PadreImport.h"
using namespace std;



ref class parametriTXT :public PadreImport
{
public:
	parametriTXT(System::String^ file) : PadreImport(file) {};

	void leggifile();			// legge parametriCSV dal file



};


