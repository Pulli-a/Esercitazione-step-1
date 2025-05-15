#include <iostream>
#include <cmath>
#include <cstring>
#include "CLogarithmic.h"

using namespace std;

///@brief costruttore default
///@note una funzione log di default ha base 10 e coefficente 0
Logarithmic::Logarithmic(){
	impostacoef(10, 0.0);
}
///@brief copia-costruttore
Logarithmic::Logarithmic(const Logarithmic &l){
	impostacoef(l.b_coeff, l.k_coeff);
}
///@brief costruttore non di default
///@param b parametro base
///@param k parametro coefficente
Logarithmic::Logarithmic(double b, double k){
	impostacoef(b, k);
}
///@brief distruttore di default
Logarithmic::~Logarithmic(){
	//non ho puntatori faccio un eliminazione shallow
}
///@brief overloading operatore =
Logarithmic& Logarithmic::operator=(const Logarithmic& l){
	if(this == &l){
		return *this;
	}else{
		k_coeff = l.k_coeff;
		b_coeff = l.b_coeff;
		return *this;
	}
}
///@brief overloading operatore ==
bool Logarithmic::operator==(const Logarithmic& l){
	if(k_coeff == l.k_coeff && b_coeff == l.b_coeff){
		return true;
	}else{
		return false;
	}
}
///@brief GetValue restituisce il valore di y data x
///@param x
///@return y
double Logarithmic::GetValue(double in){
	if(in > 0){
		return k_coeff*(log2(in) / log2(b_coeff));
	}else{
		ErrorMessage("valore di x in un log puo' essere solo > 0");
	}
}
///@brief imposta il valore k
///@param k
void Logarithmic::impostak(double k){
	k_coeff = k;
}
///@brief imposta il valore b
///@param b
void Logarithmic::impostab(double b){
	if(b <= 0.0){
		cout<<"errore impostando base, deve essere >0"<<endl<<flush;
		return;
	}else{
		b_coeff = b;
		return;
	}
}
///@brief imposta il valore k
///@param b
///@param k
void Logarithmic::impostacoef(double b, double k){
	if(b > 0.0){
		b_coeff = b;
		k_coeff = k;
		return;
	}else{
		cout<<"errore impostando base, deve essere >0"<<endl<<flush;
		return;
	}
}
///@brief dump dei dati
void Logarithmic::Dump(){
	cout<<"dumping funzione logaritmica"<<endl<<"base: "<< b_coeff<<" coefficente: "<<k_coeff<<endl<<flush;
}