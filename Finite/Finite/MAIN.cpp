#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include "CSVimport.h"
#include "TXTimport.h"
#include "Differenze_finite_esplicite.h"
#include "CSVexport.h"
#include "differenze_implicite.h"


int ciclo0 = 0;
int met_input = 0;
int esten = 0;
string nome_file;


int main()
{
	

	while (ciclo0 != 1)
	{
		cout << "Che tipi di input utilizzi?" << endl << "1) File" << endl << "2) Manuale" << endl;
		cin >> met_input;
		switch (met_input)			// voglio sapere come avverrà l' input
		{
		case 1: // caso file chiedo nome
			cout << "Quale estensione ha?  (inserisci il numero) " << endl << "1) CSV" << endl << "2) TXT" << endl << "3) JSON" << endl;
			cin >> esten;	//input 1 ,2,3 altrimenti errore
			switch (esten)
				{
				case 1:													//file CSV
					cout << "Inserisci il nome del file: ";
					cin >> nome_file;
					fstream file;
					file.open(nome_file);
					if (file.is_open()==1) 
				{
					file.close();
					ciclo0 = 1;
					parametriCSV inputcsv(nome_file);
					inputcsv.leggifile();
					int righe_csv = inputcsv.contatore;
					vector<double> ris_exp_eu(righe_csv);
					vector<double> ris_exp_us(righe_csv);
					vector<double> ris_imp_eu(righe_csv);
					vector<double> ris_imp_us(righe_csv);

					Differenze_finite_esplicite csvexp;
					differenze_implicite csvimp;
					for(int i=0;i<righe_csv;i++)
					{
						ris_exp_eu[i] = csvexp.option_price_put_european_finite_diff_explicit(	inputcsv.S[i],     //calcolo differenze esplicite e insersco i risultati nel vettore dei risultati
																								inputcsv.K[i], 
																								inputcsv.r[i],
																								inputcsv.sigma[i],
																								inputcsv.time[i],
																								inputcsv.no_s_steps[i],	
																								inputcsv.no_t_steps[i]);

						
						ris_exp_us[i] = csvexp.option_price_put_american_finite_diff_explicit(	inputcsv.S[i],		//calcolo differenze esplicite e insersco i risultati nel vettore dei risultati
																								inputcsv.K[i],
																								inputcsv.r[i],	
																								inputcsv.sigma[i],
																								inputcsv.time[i],
																								inputcsv.no_s_steps[i],
																								inputcsv.no_t_steps[i]);


						ris_imp_eu[i]= csvimp.option_price_put_european_finite_diff_implicit(	inputcsv.S[i],		//calcolo differenze implicite e insersco i risultati nel vettore dei risultati
																								inputcsv.K[i],
																								inputcsv.r[i],
																								inputcsv.sigma[i],
																								inputcsv.time[i],
																								inputcsv.no_s_steps[i],
																								inputcsv.no_t_steps[i]);

						ris_imp_us[i] = csvimp.option_price_put_american_finite_diff_implicit(	inputcsv.S[i],		//calcolo differenze implicite e insersco i risultati nel vettore dei risultati
																								inputcsv.K[i],
																								inputcsv.r[i],
																								inputcsv.sigma[i],
																								inputcsv.time[i],
																								inputcsv.no_s_steps[i],
																								inputcsv.no_t_steps[i]);

						cout << ris_exp_eu[i] << endl << ris_exp_us[i] << endl << ris_imp_eu[i] << endl << ris_imp_us[i] << endl;


					}



						break;
				}
					else
					{
						cout << "Errore apertura file re-inserisci il nome " << endl;
							break;
					}
			
			
				}

				break; // break swith met_input
		default:
			cout << "errore di input riprova" << endl;

		break;
		}



	}



















	/*parametriCSV inputcsv("CSVinput.csv"); // definizione delle classi di input da file
	parametriTXT inputtxt("TXTinput.txt");
	inputcsv.leggifile();
	inputtxt.leggifile();
	Differenze_finite_esplicite prova;
	int righe = inputcsv.contatore;
	
	differenze_implicite imp;
	double ciaone = imp.option_price_put_american_finite_diff_implicit(50.0, 50.0, 0.1, 0.4, 0.5, 200, 200);
	cout << ciaone << endl<<endl;
	double ciaone2 = imp.option_price_put_european_finite_diff_implicit(50.0, 50.0, 0.1, 0.4, 0.5, 200, 200);
	cout << ciaone2 << endl << endl;
	
	
	vector<double> rexpeur(righe);			// vettore per risultati
	for (int i = 0; i < righe; i++) {		// eseguo l algoritmo per tutte le letture
		//cout << righe << endl;
		rexpeur[i] = prova.option_price_put_european_finite_diff_explicit(inputcsv.S[i], inputcsv.K[i], inputcsv.r[i], inputcsv.sigma[i], inputcsv.time[i], inputcsv.no_s_steps[i], inputcsv.no_t_steps[i]);
		cout << rexpeur[i] << endl;

	}
	CSVexport outputcsv;
	outputcsv.out(rexpeur,righe);


	//double pro = prova.option_price_put_european_finite_diff_explicit (50.0, 50.0, 0.1, 0.4, 0.4167, 20, 11);
	//cout << pro << endl << endl; // prova european
	//Differenze_finite_esplicite prova2;
	double pro = prova.option_price_put_american_finite_diff_explicit(50.0, 50.0, 0.1, 0.4, 0.4167, 20, 11);
	cout << pro << endl << endl; // prova american*/
	
	system("PAUSE");

}