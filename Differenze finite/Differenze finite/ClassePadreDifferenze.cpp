#include "ClassePadreDifferenze.h"



/*ClassePadreDifferenze::ClassePadreDifferenze(	double  Sin,
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

	

	

};*/
void ClassePadreDifferenze::SetVariabili(	double  Si,
											double  Ki,
											double ri,
											double  sigmai,
											double  timei,
											int  no_S_stepsi,
											int  no_t_stepsi)
{

	S = Si;
	K = Ki;
	r = ri;
	sigma = sigmai;
	time = timei;
	no_S_steps = no_S_stepsi;
	no_t_steps = no_t_stepsi;

}

