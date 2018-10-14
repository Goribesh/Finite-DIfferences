#pragma once
#include "ClassePadreDifferenze.h"
#include<cmath>
#include<vector>
#include<algorithm> 
#include<iostream>

using namespace std;

ref class Differenze_esplicite : public ClassePadreDifferenze
{
public:



	
	//Differenze_esplicite(double  Sin, double  Kin, double rin, double  sigmain, double  timein, int  no_S_stepsin, int  no_t_stepsin) : ClassePadreDifferenze(Sin, Kin, rin, sigmain, timein, no_S_stepsin, no_t_stepsin) {};

	//using ClassePadreDifferenze::ClassePadreDifferenze;

	double option_price_put_european_finite_diff_explicit();


	double option_price_put_american_finite_diff_explicit();


	double sigma = ClassePadreDifferenze::sigma;
	double S = ClassePadreDifferenze::S;
	double K = ClassePadreDifferenze::K;
	double X = ClassePadreDifferenze::K;
	double time = ClassePadreDifferenze::time;
	double r = ClassePadreDifferenze::r;
	int no_t_steps = ClassePadreDifferenze::no_t_steps;
	int no_S_steps = ClassePadreDifferenze::no_S_steps;
		
		
	
		
		
		
};

