// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q9. Write a program in C++ to swap two numbers.

// Program start
#include <iostream>
using namespace std;

int main(){
	// var declaration
	int a = 9;
	int b = 7;
	
	cout<<"**** Swapping two numbers ****"<<endl;
	cout<<"\nBefore Swapping"<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
	
	// swapping a into b and b into a
	int c = b; // to store b value in c
	b = a;
	a = c;
	
	cout<<"\nAfter Swapping"<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
	
	
	return 0;
}
