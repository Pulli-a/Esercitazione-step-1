#include "CFunction.h"
#include "CPolynomial.h"
#include "CExponential.h"


int main(){
	Exponential E1;
	Exponential E2(1, 2 , 1);
	Exponential E3(E2);

	E1.Dump();
	E2.Dump();
	E3.Dump();

	double exp2 = E2.GetValue(6);
	double exp3 = E3.GetValue(2);

	cout << exp2 << "  " << exp3 << endl;

}