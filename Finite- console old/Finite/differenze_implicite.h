#pragma once
#include<cmath>
#include<vector>
#include<algorithm> 
#include<iostream>
#include <newmat.h>
using namespace NEWMAT;
using namespace std;




class differenze_implicite
{
public:
	double option_price_put_european_finite_diff_implicit(const double& S,
		const double& K,
		const double& r,
		const double& sigma,
		const double& time,
		const int& no_S_steps,
		const int& no_t_steps);


	double option_price_put_american_finite_diff_implicit(const double& S,
		const double& K,
		const double& r,
		const double& sigma,
		const double& time,
		const int& no_S_steps,
		const int& no_t_steps);
};

