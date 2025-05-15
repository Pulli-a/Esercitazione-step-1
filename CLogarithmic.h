/*! @file Logarithmic.h
	@brief A class for Logarithmic functions 
	@author Mauro Gori
											\n
	Logaritmic has the form:				\n
	y = k * logb(x)							\n
*/ 

#ifndef LOGARITMICO_H
#define LOGARITMICO_H

#include<iostream>
#include<cmath>
#include<cstring>
#include"CFunction.h"
using namespace std;


class Logarithmic : public Function{
	protected:
		double b_coeff;	//base del logaritmo
		double k_coeff;	//coefficente
	public:

	///@name costruttori, distruttori
	///@{
	Logarithmic();
	Logarithmic(const Logarithmic &l);
	~Logarithmic();
	Logarithmic(double b, double k);
	///@}

	///@name operatori
	///@{
	Logarithmic& operator=(const Logarithmic &l);
	bool operator==(const Logarithmic &l);
	///@}

	///@name funzioni getter
	///@{
	double GetValue(double in);
	///@}

	///@name funzioni setter
	///@{
	void impostak(double k);
	void impostab(double b);
	void impostacoef(double b, double k);
	///@}

	///@name funzioni debug
	///@{
	void Dump();
	///@}
	
};
#endif