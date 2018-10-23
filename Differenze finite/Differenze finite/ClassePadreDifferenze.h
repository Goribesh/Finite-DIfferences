#pragma once
using namespace std;


// creo una classe padre 

 public ref class ClassePadreDifferenze 
{
public:
										// inizializzo le varibili che verranno utilizzate per i figli
	double S =0;
	double K =0;
	double X =0;
	double r =0;
	double sigma=0 ;
	double time = 0;
	int no_S_steps = 0;
	int no_t_steps = 0;


	virtual void  SetVariabili( double  Sin, //creo una classe virtuale per sfruttare nelle figlie
								double  Kin,						// la funzione setta i valori locali della classe attraverso i parametri in ingresso in modo da far eseguire gli algoritmi alle classi figlie
								double rin,
								double  sigmain,
								double  timein,
								int  no_S_stepsin,
								int  no_t_stepsin)

	
	{
		S = Sin;
		K = Kin;
		X = Kin;
		r = rin;
		sigma = sigmain;
		time = timein;
		no_S_steps = no_S_stepsin;
		no_t_steps = no_t_stepsin;

		
	}
};




	









