#include "ClassePadreDifferenze.h"



ClassePadreDifferenze::ClassePadreDifferenze(	double  Sin,
												double  Kin,
												double rin,
												double  sigmain,
												double  timein,
												int  no_S_stepsin,
												int  no_t_stepsin)
{
	

		S = Sin;
		K = Kin;
		r = rin;
		sigma = sigmain;
		time = timein;
		no_S_steps = no_S_stepsin;
		no_t_steps = no_t_stepsin;

	

	

};
void ClassePadreDifferenze::SetVariabili(	double  Sin,
											double  Kin,
											double rin,
											double  sigmain,
											double  timein,
											int  no_S_stepsin,
											int  no_t_stepsin)
{

	S = Sin;
	K = Kin;
	r = rin;
	sigma = sigmain;
	time = timein;
	no_S_steps = no_S_stepsin;
	no_t_steps = no_t_stepsin;

}

