/*! @file Logarithmic.h
	@brief A class for Logarithmic functions 
	@author Mauro Gori
											\n
	Logaritmic has the form:				\n
	y = k * logb(x)							\n
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
	///@}

	///@name Setter Functions
	///@{
	void impostak(double k);
	void impostab(double b);
	void impostacoef(double b, double k);
	///@}

	///@name Debug functions
	///@{
	void Dump();
	///@}
	
};
#endif