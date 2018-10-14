#pragma once
#include<iostream>
using namespace std;




public ref class ClassePadreDifferenze abstract
{
public:

	double S =2.0;
	double K =2.0;
	double X = 2.0;
	double r = 2.0;
	double sigma=2.0 ;
	double time = 2.0;
	int no_S_steps = 2;
	int no_t_steps = 2;


	/*ClassePadreDifferenze(	double  Sin,
							double  Kin,
							double rin,
							double  sigmain,
							double  timein,
							int  no_S_stepsin,
							int  no_t_stepsin);*/


	virtual void  SetVariabili(double  Sin,
		double  Kin,
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

		//cout << S << K << r << sigma << time << no_S_steps << no_t_steps << endl;

		
	}
};




	









