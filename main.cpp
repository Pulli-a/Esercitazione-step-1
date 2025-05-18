#include "CPolynomial.h"
#include "CExponential.h"
#include "CLogarithmic.h"
#include "Cpower.h"


int main(){
	Function* array[7];
	int len = 7;
	Exponential E1;
	Exponential E2(1, 2 , 1);
	Logarithmic L1(10, 5);
	Logarithmic L2;
	Power P0;
	Power P1(-2, 4);
	Power P2(1, 0);

	E1.SetExponential(1, 2, 0);

	array[0] = &E1;
	array[1] = &E2;
	array[2] = &L1;
	array[3] = &L2;
	array[4] = &P0;
	array[5] = &P1;
	array[6] = &P2;

	for(int i = 0; i < len; i++){
		array[i]->Dump();
		cout << "value in x= 3 : " << array[i]->GetValue(3.) << endl << endl ;
	}

	cout << "##########################################" << endl;

	E2.SetBCoeff(-1);

	for(int i = 0; i < len; i++){
		array[i]->Dump();
		cout << "value in x= -5 : " << array[i]->GetValue(-5.) << endl << endl ;
	}

	cout << "##########################################" << endl;

	/// operator == tests

	for(int i = 0; i < len-1; i+=2){ //NOTE: the i+=2 is important!
		array[i] == array[i+1] ? cout << i << "Equal to " << i+1 << endl : cout << i << " NOT Equal to " << i+1 << endl;
	}

	cout << "##########################################" << endl;

	// operator = tests
	for(int i = 0; i < len-1; i+=2){ //NOTE: the i+=2 is important!
		array[i] = array[i+1];
		array[i]->Dump();
		array[i+1]->Dump();
		array[i] == array[i+1] ? cout << i << " Equal to " << i+1 << endl : cout << i << " NOT Equal to  " << i+1 << endl;
	}

	
	return 0;
}