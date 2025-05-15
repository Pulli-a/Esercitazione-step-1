/*! @file Logarithmic.h
	@brief classe che implementa una funzione logaritmica, k*logb x
	@author Mauro Gori
	aaaaaaaa
*/ 
///@param b_coeff base del logaritmo
///@param k_coeff coefficente
 
#ifndef LOGARITMICO_H
#define LOGARITMICO_H

#include<iostream>
#include<cmath>
#include<cstring>
#include"CFunction.h"
using namespace std;


class Logarithmic : public Function{
	protected:
		///@param b_coeff base del logaritmo
		///@param k_coeff coefficente
		double b_coeff;	//base del logaritmo
		double k_coeff;	//coefficente
	public:
	///@name costruttori, distruttori
	///@{
	Logarithmic();
	Logarithmic(const Logarithmic &l);
	~Logarithmic();
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