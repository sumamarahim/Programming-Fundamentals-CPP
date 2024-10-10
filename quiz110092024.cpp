#include <iostream>

using namespace std;

int main(){
	// checking all outputs of QUIZ 1 that was held on 10/09/2024

	// 1
	// int x = 10, y;
	// y = x++;
	// cout<<y; // expected output: 11 but actual output is 10

	/*
		============= EXPLAINATION ==============
		Step 1: initial value is x = 10
			so x++ is post-increment so it returns 10 and after that it do increment by 1 so x = 10 after returning x = 11, So it prints 10
		
		=========================================
	*/

	// 2
	// int x = 10;
	// x++;
	// cout<<x; // expected output: 11, actual output is 11

	// 3
	// int x = 10, y;
	// y = ++x;
	// cout<<y; // expected output: 11, actual output is 11

	// 4
	// int w = 10;
	// cout<<w++; // expected output: 11, actual output is 10


	/*
		============= EXPLAINATION ==============
		Step 1: initial value is w = 10
			so w++ is post-increment so it returns 10 and after that it do increment by 1 so w = 10 after returning w = 11, So it prints 10
		
		=========================================
	*/


	// 5
	// int x = 10;
	// cout<<++x; // expected output: 11, actual output is 11

	// 6
	int t  = 10, z;
	z =  ++t + t++ + t;
	cout<<z; // expected output: 32   ....  34, actual output is 35


	/*
		============= EXPLAINATION ==============
		Step 1: initial value is x = 10
			so ++x is pre-increment so it returns 11 after increment of 1 so x = 11
		Step 2: x++
			post-increment will return first the value of x which is 11 then it do increment of 1 so x = 12
		Step 3: x
			now, x = 12 due to the last post-increment 

		Final 
		y = ++x + x++ + x => 1+10 + 11 + 12
		y = 11 + 11 + 12 = 34
		=========================================
	*/


	// 6.1 self
	int p  = 10, o;
	o =  p++ + ++p + p;
	cout<<o; // expected output: 35, actual output is 34


	/*
		============= EXPLAINATION ==============
		Step 1: initial value is x = 10
			so ++x is pre-increment so it returns 11 after increment of 1 so x = 11
		Step 2: x++
			post-increment will return first the value of x which is 11 then it do increment of 1 so x = 12
		Step 3: x
			now, x = 12 due to the last post-increment 

		Final 
		y = ++x + x++ + x => 1+10 + 11 + 12
		y = 11 + 11 + 12 = 34
		=========================================
	*/

	// 7
	// int x = 10, y;
	// y = x++ + x + ++x;
	// cout<<y; // expected output: 32, actual output is 33
	
	/*
		============= EXPLAINATION ==============
		Step 1: initial value is x = 10
			so x++ is post-increment so it returns 10 and after that it do increment by 1 so x=11
		Step 2: x
			so x = 11
		Step 3: ++x
			now, it is pre-increment so first it will do increment by 1 and returns 11+1 which is 12

		Final 
		y = x=10, x=11, x=11+1=12
		y = 10 + 11 + 11+1 = 33
		=========================================
	*/

	// 8
	int x = 10, y;
	y = x + x++;
	cout<<y; // expected output: 21, actual output is 21


	// RESULT
	// Need to cover this type of questions and concept like pre and post increment/decrement
}
