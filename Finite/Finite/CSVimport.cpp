// file per importazione di un file csv, il file comprende i parametri: S, K, r, sigma, time, no_s_steps, no_t_step
//separati da una virgola

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class parametri {
public:
	void leggifile(const string file);



private:
	double S, K, r, sigma, time, no_s_steps, no_t_steps = 0;
};


void parametri::leggifile(const string file) {
	fstream file_param;
	file_param.open(file);

}




parametri input;




int main()
{
	input.leggifile("CSVinput");
}
