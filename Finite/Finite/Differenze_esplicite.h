#pragma once
#include "ClassePadreDifferenze.h"
#include<cmath>
#include<vector>
#include<algorithm> 
#include<iostream>
#include <newmat.h>
using namespace NEWMAT;
using namespace std;

class Differenze_esplicite : public ClassePadreDifferenze
{
public:

	using ClassePadreDifferenze::ClassePadreDifferenze;

	double option_price_put_european_finite_diff_explicit(/*	const double& S,
															const double& X,
															const double& r,
															const double& sigma,
															const double& time,
															const int& no_S_steps,
															const int& no_t_steps*/);


	double option_price_put_american_finite_diff_explicit(/*	const double& S,
															const double& K,
															const double& r,
															const double& sigma,
															const double& time,
															const int& no_S_steps,
															const int& no_t_steps*/);


	double sigma = ClassePadreDifferenze::sigma;
	double S = ClassePadreDifferenze::S;
	double K = ClassePadreDifferenze::K;
	double X = ClassePadreDifferenze::K;
	double time = ClassePadreDifferenze::time;
	double r = ClassePadreDifferenze::r;
	int no_t_steps = ClassePadreDifferenze::no_t_steps;
	int no_S_steps = ClassePadreDifferenze::no_S_steps;
		
		
		
		
		
		
};

