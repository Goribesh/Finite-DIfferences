
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class parametriCSV {
public:
	void leggifile();			// legge parametriCSV dal file
	parametriCSV(const string file); // costruttore, prende in ingresso il nome del file di import
	size_t contatore = 0;
	size_t num_righe = 0;
	string nome;
	
	//vector<double> results(contatore);



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
	int *no_s_steps = new int[num_righe];
	int *no_t_steps = new int[num_righe];


	
	

	





};

