/*! @file Logarithmic.cpp
	@brief implementation of Logarithmic.h functions 
	@author Mauro Gori
											\n
	Logaritmic has the form:				\n
	y = k * logb(x)							\n
*/ 

#include <iostream>
#include <cmath>
#include <cstring>
#include "CLogarithmic.h"

using namespace std;

///@brief Default constructor
///@note it sets the base = 10 and coefficent = 0 as default
Logarithmic::Logarithmic(){
	SetCoeff(10, 0.0);
}

///@brief Copy-Constructor
Logarithmic::Logarithmic(const Logarithmic &l){
	SetCoeff(l.b_coeff, l.k_coeff);
}

///@brief Non-Default Constructor
///@param b Base Parameter
///@param k Coefficent Parameter
Logarithmic::Logarithmic(double b, double k){
	SetCoeff(b, k);
}

///@brief Default Destructor
Logarithmic::~Logarithmic(){
	//non ho puntatori faccio un eliminazione shallow
}

///@brief Operator= overloading
Logarithmic& Logarithmic::operator=(const Logarithmic& l){
	if(this == &l){
		return *this;
	}else{
		Init(l);
		return *this;
	}
}

///@brief Operator== overloading
bool Logarithmic::operator==(const Logarithmic& l){
	if(k_coeff == l.k_coeff && b_coeff == l.b_coeff){
		return true;
	}else{
		return false;
	}
}

///@brief GetValue returns the y value given an x value
///@param x
///@return y
double Logarithmic::GetValue(double in){
	if(in < 0){
		ErrorMessage("'in' value should be > 0");
		return 0;
	}
	return k_coeff*(log2(in) / log2(b_coeff));
}
///@brief GetCoeffK returns the k coefficent value
///@return k
double Logarithmic::GetCoeffK(){
	return k_coeff;
}
///@brief GetCoeffB returns the b coefficent value
///@return b
double Logarithmic::GetCoeffB(){
	return b_coeff;
}

///@brief sets the coefficent parameter
///@param k
void Logarithmic::SetCoeffK(double k){
	k_coeff = k;
}

///@brief sets the base parameter
///@param b
void Logarithmic::SetCoeffB(double b){
	if(b <= 0.0){
		ErrorMessage("cannot set base < 0");
		return;
	}else{
		b_coeff = b;
		return;
	}
}

///@brief sets both the base and coefficent parameters, in that order
///@param b
///@param k
void Logarithmic::SetCoeff(double b, double k){
	if(b > 0.0){
		b_coeff = b;
		k_coeff = k;
		return;
	}else{
		ErrorMessage("Cannot set base < 0");
		return;
	}
}
///@brief initializes the logarithmic functions copying a pre-existing object
void Logarithmic::Init(const Logarithmic& l){
	SetCoeff(l.k_coeff, l.b_coeff);
}
///@brief resets the logarithmic function to default values
void Logarithmic::Reset(){
	SetCoeff(10.0, 0.0);
}

///@brief data dump
void Logarithmic::Dump(){
	cout<<"Dump of Logarithmic"<<endl;
	cout << k_coeff << "log" << b_coeff << "(x)"<< endl << flush;
}