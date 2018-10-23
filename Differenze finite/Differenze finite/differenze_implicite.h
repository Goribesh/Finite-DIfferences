#pragma once
#include<cmath>
#include<vector>
#include<algorithm> 
#include <newmat.h>
#include "ClassePadreDifferenze.h"
using namespace NEWMAT;
using namespace std;




ref class differenze_implicite :public ClassePadreDifferenze		 //creo la classe figlia in modo da sfruttare tutti i valori e le funzioni della classe padre
{
public:

	double option_price_put_european_finite_diff_implicit();		// inizializzo gli algoritmi
	double option_price_put_american_finite_diff_implicit();

};

