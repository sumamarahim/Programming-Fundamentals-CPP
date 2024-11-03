// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q6. Write a program in C++ to display the operation of pre and post increment and decrement.

// Program start
#include <iostream>
using namespace std;

int main(){
	cout<<"**** Pre and Post increment and Decrement ****"<<endl;
	
	// var declaring
	int a = 10;
	int b = 15; 
	int u, v, w, x, y, z;
	/**
	ROUGH CALC
	________________________
		post increment
		x = a++;
		y = a++ + a; 
		
		pre increment
		w = ++a;
		u = ++a + a;
		
		post decrement
		v = b--;
		s = b-- + b;
		
		
		pre decrement
		r = --b;
		f = --b + b;
	*/
	
	
	// Increment
	// Pre Increment
	u = ++a; // u = 11
	cout<<"u = ++a: "<<u<<endl;
	cout<<"u = ++a + a: "<<(u = ++a + a)<<endl; // initially u = 10+1, then 1+11 + 12(it's pre increment) = 24
	
	// Post Increment
	u = a++; // u = 11 and after that it make increment of 1 so u will be 12 after returning 11
	cout<<"Post Increment: "<<u<<endl;
	cout<<u+1<<endl;
	
	
	
	
	// Decrement
	// Pre Decrement
	u = ++a; // u = 11
	cout<<"u = ++a: "<<u<<endl;
	cout<<"u = ++a + a: "<<(u = ++a + a)<<endl; // initially u = 10+1, then 1+11 + 12(it's pre increment) = 24
	
	// Post Decrement
	u = a++; // u = 11 and after that it make increment of 1 so u will be 12 after returning 11
	cout<<"Post Increment: "<<u<<endl;
	cout<<u+1<<endl;
	
	return 0;
}
