/*! @file Logarithmic.h
	@brief A class for Logarithmic functions 
	@author Mauro Gori
											\n
	Logaritmic has the form:				\n
	y = k * logb(x)							\n
	By default a logarithmic function has base 10 and coefficent = 0	\n
*/ 

#ifndef LOGARITHMIC_H
#define LOGARITHMIC_H

#include<iostream>
#include<cmath>
#include<cstring>
#include"CFunction.h"
using namespace std;


class Logarithmic : public Function{
	protected:
		double b_coeff;
		double k_coeff;
	public:

	///@name Constructors and Destructors
	///@{
	Logarithmic();
	Logarithmic(const Logarithmic &l);
	~Logarithmic();
	Logarithmic(double b, double k);
	///@}

	///@name Operators Overloading
	///@{
	Logarithmic& operator=(const Logarithmic &l);
	bool operator==(const Logarithmic &l);
	///@}

	///@name Getter Functions
	///@{
	double GetValue(double in);
	double GetCoeffK();
	double GetCoeffB();
	///@}

	///@name Setter Functions
	///@{
	void SetCoeffK(double k);
	void SetCoeffB(double b);
	void SetCoeff(double b, double k);
	///@}

	///TODO: implementa Reset() e Init(Logarithmic &l) [la init è opzionale]
	///l'idea è che il costruttore di copia e operatore= chiamino Init()

	///@name Debug functions
	///@{
	void Init(const Logarithmic& l);
	void Dump();
	void Reset();
	///@}
	
};
#endif