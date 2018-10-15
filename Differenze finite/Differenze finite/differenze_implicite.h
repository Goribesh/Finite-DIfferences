#pragma once
#include<cmath>
#include<vector>
#include<algorithm> 
#include<iostream>
#include <newmat.h>
#include "ClassePadreDifferenze.h"
using namespace NEWMAT;
using namespace std;




ref class differenze_implicite :public ClassePadreDifferenze
{
public:

	double option_price_put_european_finite_diff_implicit();


	double option_price_put_american_finite_diff_implicit();

};

