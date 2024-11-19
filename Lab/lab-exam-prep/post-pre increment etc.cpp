#include <iostream>
using namespace std;

int main(){
	cout<<"*** Pre/Post - Increment and Decrement ***"<<endl;
	
	/**
		pre increment
			first increment and then use it
			
			let a = 1
			++a = 1+1 and a = 2
			
		post increment
			first use it and then do increment for next call
			
	*/
	
//	// Example 1
//
//	int m = 10, n, n1;
//	n = ++m;	// n = 1 + 10, n and m = 11
//	n = m++;	// n = 11, and m = 12 and n = 12 in next call
//	
//	cout<<"n: "<<n<<endl;
//	cout<<"m: "<<m<<endl;
	
	
//	// Example 2
//	int a = 1, b;
//	b = a++ + a++; // a = 3, b = 3; - a=1 and a returns 2, a=2 and a returns 3 but b=1+2;
//	b = ++a + ++a; // a = 3, b = 6; - 1+1 and a is 2 then 2+1 and a is 3, now 3+3=b
//	b = ++a + a++; // a = 3, b = 5; - a = 2, 3, b = 3 + 2

	// it make left to right 2 operands with 1 operator in paranthesis then use that value for the next operator
//	b = ++a + a++ + ++a; // a = 4, b = 9; - a = (2 + 3) + 4 so a = 4, b = (3 + 2) + 4 and b = 9
//	b = a++ + ++a + ++a; // a = 4, b = 8; - a = (1+1+1) + 3+1 so a = 4 and b = (1 + 3) + 4 and b = 9
//	b = a++ + ++a + a++; // a = 4, b = 7; - a = (1+1+1)+1 and b = (1+3)+3
//	b = a++ + ++a + a++ + ++a;
//	/**
//		a = (1+1+1)+(1+1) = 5
//		b = (1+3)+(3+5) = 12
//	*/
//	
//	cout<<"a: "<<a<<endl;
//	cout<<"b: "<<b<<endl;
//	

	
	return 0;
}
