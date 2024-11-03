// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q14.	Write a program in C++ to compute quotient and remainder.

// Program start
#include <iostream>
using namespace std;

int main(){
	/**
		quotient and remainder
		let suppose 
		7 / 3 = 2 is quotient and 1 is remainder
	*/
	
	cout<<"**** Compute Quotient and Remainder ****"<<endl;
	
	int a = 7, b = 3, quotient, remainder;
	quotient = (a/b);
	remainder = a % b;
	cout<<"Quotient is: "<<quotient<<endl;
	cout<<"Remainder is: "<<remainder<<endl;
	
	
	return 0;
}
