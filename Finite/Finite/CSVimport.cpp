// file per importazione di un file csv, il file comprende i parametri: S, K, r, sigma, time, no_s_steps, no_t_step
//separati da una virgola

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class parametri {
public:
	void leggifile(const string file);			// legge parametri dal file
	//int n_righe(const string file);			// numero righe
	parametri(size_t n);
	size_t num_righe=10;
	

private:

	string empty;
	string *SS = new string[num_righe];
	string *SK = new string[num_righe];
	string *Sr = new string[num_righe];
	string *Ssigma = new string[num_righe];
	string *Stime = new string[num_righe];
	string *Sno_s_steps = new string[num_righe];
	string *Sno_t_steps = new string[num_righe];

	double *S = new double[num_righe];
	double *K = new double[num_righe];
	double *r = new double[num_righe];
	double *sigma = new double[num_righe];
	double *time = new double[num_righe];
	double *no_s_steps = new double[num_righe];
	double *no_t_steps = new double[num_righe];
	
	
	
	

};

parametri::parametri(size_t n) {			// costruttore 
	num_righe = n;
}

/*int parametri::n_righe(const string file) {
	int num_righe = 0;
	string empty;
	fstream file_param;
	file_param.open(file);  //apertura file 
	cout << file << endl;

	while (getline(file_param, empty)) {      //leggo numero di righe di valori
		num_righe++;
	}
	cout <<"Sono state trovate "<< num_righe <<" righe"<< endl;

	file_param.close();
	return num_righe;

}*/

void parametri::leggifile(const string file) {
	
	fstream file_param;
	file_param.open(file);  //apertura file 
	
	

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

		getline(file_param, Sno_s_steps[i], ' '); // lettura del valore no_s_stepss
		cout << Sno_s_steps[i] << endl;
		no_s_steps[i] = stod(Sno_s_steps[i]);
		cout << no_s_steps[i] << endl;

		getline(file_param, Sno_t_steps[i], '\n'); // lettura del valore no_t_steps
		cout << Sno_t_steps[i] << endl;
		no_t_steps[i] = stod(Sno_t_steps[i]);
		cout << no_t_steps[i] << endl;


	}
	file_param.close();
}


size_t num(const string file) {
	size_t num_righe =0 ;
	string empty;
	fstream file_param;
	file_param.open(file);  //apertura file 
	cout << file << endl;

	while (getline(file_param, empty)) {      //leggo numero di righe di valori
		num_righe++;
	}
	cout << "Sono state trovate " << num_righe << " righe" << endl;

	file_param.close();
	return num_righe;
}






int main()
{
	int n = num("CSVinput.csv");
	parametri input(n);
	cout << input.num_righe << endl;
	input.leggifile("CSVinput.csv"); // prova file, questo alla fine sara un file con sola classe senza main
	
}
