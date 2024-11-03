                                                                                                                           // Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q7. Write a program in C++ to add two numbers accept through keyboard.

// Program start
#include <iostream>
using namespace std;

int main(){
	//	variable declaration
	int num1;
	int num2;
	int sum;
	
	cout<<"**** Add two numbers that takes from keyboard ****"<<endl;
	//	take input from the user by keyboard
	cout<<"\nEnter First number: "<<endl;
	cin>>num1;
	cout<<"Enter Second number: "<<endl;
	cin>>num2;
	
	//	operation
	sum = num1 + num2;
	
	//	show output
	cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<sum<<endl;
	
	return 0;
}
