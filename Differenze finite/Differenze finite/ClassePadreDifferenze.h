#pragma once
#include<vector>
using namespace std;





class ClassePadreDifferenze
{
public:
	ClassePadreDifferenze(	double  Sin,
							double  Kin,
							double rin,
							double  sigmain,
							double  timein,
							int  no_S_stepsin,
							int  no_t_stepsin);

void	SetVariabili(	double  Sin,
						double  Kin,
						double rin,
						double  sigmain,
						double  timein,
						int  no_S_stepsin,
						int  no_t_stepsin);

	 double S;
	 double K;
	 double r;
	 double sigma;
	 double time;									
	 int  no_S_steps;
	 int  no_t_steps;







};

