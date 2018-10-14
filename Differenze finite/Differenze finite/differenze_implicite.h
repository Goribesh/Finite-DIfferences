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

	
	//differenze_implicite(double  Sin, double  Kin, double rin, double  sigmain, double  timein, int  no_S_stepsin, int  no_t_stepsin) : ClassePadreDifferenze(Sin, Kin, rin, sigmain, timein, no_S_stepsin, no_t_stepsin) {};
	//using ClassePadreDifferenze::ClassePadreDifferenze;
	double option_price_put_european_finite_diff_implicit(/*const double& S,
		const double& K,
		const double& r,
		const double& sigma,
		const double& time,
		const int& no_S_steps,
		const int& no_t_steps*/);


	double option_price_put_american_finite_diff_implicit(/*const double& S,
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

