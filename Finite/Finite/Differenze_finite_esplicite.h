#pragma once
#include<cmath>
#include<vector>
#include <algorithm> 
using namespace std;



class Differenze_finite_esplicite
{
public:
	double option_price_put_european_finite_diff_explicit(const double& S,
		const double& X,
		const double& r,
		const double& sigma,
		const double& time,
		const int& no_S_steps,
		const int& no_t_steps);
};

