#pragma once

using namespace std;




public ref class ClassePadreDifferenze
{
public:
	/*ClassePadreDifferenze(	double  Sin,
							double  Kin,
							double rin,
							double  sigmain,
							double  timein,
							int  no_S_stepsin,
							int  no_t_stepsin);*/


void	SetVariabili(	double  Sin,
						double  Kin,
						double rin,
						double  sigmain,
						double  timein,
						int  no_S_stepsin,
						int  no_t_stepsin);



	 double S=0;
	 double K=0;
	 double r=0;
	 double sigma=0;
	 double time=0;									
	 int  no_S_steps=0;
	 int  no_t_steps=0;







};

