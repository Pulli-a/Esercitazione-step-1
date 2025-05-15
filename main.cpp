#include "CFunction.h"
#include "CPolynomial.h"
#include "CExponential.h"


int main(){
	Function** array[4];
	Exponential E1;
	Exponential E2(1, 2 , 1);
	Logarithmic L1(10, 5);
	Logarithmic L2;
	
	array[0] = &E1;
	array[1] = &E2;
	array[2] = &L1;
	array[3] = &L2; 
	
	for(int i = 0; i < 4){
		cout<<"valore della funzione in x = 2"<<array[i]->GetValue(2)<<endl<<flush;

	cout << exp2 << "  " << exp3 << endl;

}