#pragma once
#include "ClassePadreDifferenze.h"
#include<cmath>
#include<vector>
#include<algorithm> 

using namespace std;

ref class Differenze_esplicite :  ClassePadreDifferenze  //creo la classe figlia in modo da sfruttare tutti i valori e le funzioni della classe padre
{
public:



	double option_price_put_european_finite_diff_explicit(); // definisco gli algoritmi
	double option_price_put_american_finite_diff_explicit();


		
		
};

