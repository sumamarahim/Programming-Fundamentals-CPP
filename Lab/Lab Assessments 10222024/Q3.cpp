// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q3.	Write a program in C++ to print the sum of two numbers.

// Program start
#include <iostream>
using namespace std;

int main(){
	// let we have 2 numbers predefined
	int num1 = 7;
	int num2 = 5;
	int sum = num1 + num2;
	cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
	
	// Let suppose, we want the variable values in run time
	int numb1, numb2, add;
	
	// take input through keyboard
	cout<<"Enter first: "<<endl;
	cin>>numb1;
	cout<<"Enter second: "<<endl;
	cin>>numb2;
	
	// perform operation
	add = numb1 + numb2;
	cout<<"The sum of "<<numb1<<" and "<<numb2<<" is "<<add<<endl;
	
	return 0;
}
