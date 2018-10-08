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
	string SS, SK, Sr, Ssigma, Stime, Sno_s_steps, Sno_t_steps ;
	double S, K, r, sigma, time, no_s_steps, no_t_steps=0;
	

};


void parametri::leggifile(const string file) {
	fstream file_param;
	file_param.open(file);
	cout << file << endl;
	getline(file_param, SS,' ');
	cout << SS << endl;
	S = stod(SS);
	cout << S << endl;

	getline(file_param, SK, ' ');
	cout << SK << endl;
	K = stod(SK);
	cout << K << endl;


	

}




parametri input;




int main()
{
	input.leggifile("CSVinput.csv");
}
