#include <iostream>
using namespace std;

int main(){
	cout<<"*** All exercises ***"<<endl;
	int a = 1, b;
	
	/**
		pre increment
			first increment and then use it
			
			let a = 1
			++a = 1+1 and a = 2
			
		post increment
			first use it and then do increment for next call
			
	*/
	
	// Example
	int m = 10, n, n1;
	n = ++m;	// n = 1 + 10, n and m = 11
	n = m++;	// n = 11, and m = 11 and n = 12 in next call
	cout<<"n: "<<n<<endl;
	cout<<"m: "<<m<<endl;
	
	
//	b = a++ + a++; // a = 3, b = 3;
//	b = ++a + ++a; // a = 3, b = 5;
	/**
	
	b = 1+1 (a = 2) + 2+1 (a = 3)
	
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	
	*/
	
	return 0;
}
