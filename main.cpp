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

	cout << "##########################################" << endl;

	for(int i = 0; i < len; i++){
		array[i]->Dump();
		cout << "value in x= -5 : " << array[i]->GetValue(-5.) << endl << endl ;
	}

	// operator = & operator == tests

	cout << "##########################################" << endl;

	if(!(E1 == E2)){
		cout << "E1 and E2 are NOT Equal! " << endl;
		E1 = E2;
		cout << " Setting E1 = E2 and dumping them " << endl;
		E1.Dump();
		E2.Dump();
	}
	if(!(E1 == E2)){
		cout << "something is wrong!!! " << endl; 
	}
	
	if(!(L1 == L2)){
		cout << "L1 and L2 are NOT Equal! " << endl;
		L1 = L2;
		cout << " Setting L1 = L2 and dumping them " << endl;
		
		L1.Dump();
		
		L2.Dump();
	}

	if(!(L1 == L2)){
		cout << "something is wrong!!! " << endl; 
	}

	if(!(P1 == P2)){
		cout << "P1 and P2 are NOT Equal! " << endl;
		P1 = P2;
		cout << " Setting P1 = P2 and dumping them " << endl;
		
		P1.Dump();
		P2.Dump();
	}

	if(!(P1 == P2)){
		cout << "something is wrong!!! " << endl; 
	}

	// testing weir scenarios

	cout << "##########################################" << endl;

	E1.Reset();
	E1.SetExponential(1, -3, 16);
	
	E1.SetExponential(1, 20, 1000000);
	cout << "20^(1000000*10) = " << E1.GetValue(10) << endl;

	E1.SetExponential(1, 20, -1000000);
	cout << "20^(-1000000*10) = " << E1.GetValue(10) << endl;

	E1.Dump();

	cout << "##########################################" << endl;

	L1.Reset();
	L1.SetLogarithmic(1, 10000000000000);

	cout << "10000000000000 * log10(10) = " << L1.GetValue(10) << endl;

	L1.SetLogarithmic(-111111111, -111111111);
	cout << "-111111111 * log10(10) = " << L1.GetValue(10) << endl;



	return 0;
}