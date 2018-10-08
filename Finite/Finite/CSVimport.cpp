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
	string SS[50], SK[50], Sr[50], Ssigma[50], Stime[50], Sno_s_steps[50], Sno_t_steps[50];
		double S[50], K[50], r[50], sigma[50], time[50], no_s_steps[50], no_t_steps[50] ;
	int num_righe = 0;
	string empty;
	

};


void parametri::leggifile(const string file) {
	fstream file_param;
	file_param.open(file);  //apertura file 
	cout << file << endl;

	while (getline(file_param, empty)) {      //leggo numero di righe di valori
		num_righe++;
	}
	cout << num_righe << endl;
	file_param.clear();
	file_param.seekg(0, ios::beg);


	for (int i = 0; i < num_righe; i++) {
		getline(file_param, SS[i], ' '); // lettura del valore S
		cout << SS[i] << endl;
		S[i] = stod(SS[i]);
		cout << S[i] << endl;

		getline(file_param, SK[i], ' '); // lettura del valore K
		cout << SK[i] << endl;
		K[i] = stod(SK[i]);
		cout << K[i] << endl;

		getline(file_param, Sr[i], ' '); // lettura del valore r
		cout << Sr[i] << endl;
		r[i] = stod(Sr[i]);
		cout << r[i] << endl;

		getline(file_param, Ssigma[i], ' '); // lettura del valore sigma
		cout << Ssigma[i] << endl;
		sigma[i] = stod(Ssigma[i]);
		cout << sigma[i] << endl;

		getline(file_param, Stime[i], ' '); // lettura del valore time
		cout << Stime[i] << endl;
		time[i] = stod(Stime[i]);
		cout << time[i] << endl;

		getline(file_param, Sno_s_steps[i], ' '); // lettura del valore K
		cout << Sno_s_steps[i] << endl;
		no_s_steps[i] = stod(Sno_s_steps[i]);
		cout << no_s_steps[i] << endl;

		getline(file_param, Sno_t_steps[i], '\n'); // lettura del valore K
		cout << Sno_t_steps[i] << endl;
		no_t_steps[i] = stod(Sno_t_steps[i]);
		cout << no_t_steps[i] << endl;


	}
	

}




parametri input;




int main()
{
	input.leggifile("CSVinput.csv");
}
