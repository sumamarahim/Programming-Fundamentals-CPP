// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q8. Write a Program to Make a Simple Calculator.

// Program start
#include <iostream>
using namespace std;

int main(){
	/**
		ROUGH CALC
		__________
		addition: 
		substraction:
		multiplication:
		divition:
		modulus:
		BMI:
		area of square/rectangle etc:
		
		// this problem have multiple solutions as per my understanding, I'll make just simple as I can
			1. take input and perform all operations for each and every multiple time
			
	*/
	
	//	var declaration
	float add_num1, add_num2, sum;
	float mul_num1, mul_num2, mul;
	float div_num1, div_num2, div;
	int mod_num1, mod_num2, mod;
	float sub_num1, sub_num2, sub;
	
	cout<<"**** Simple Calculator ****"<<endl;
	
	//	taking input
	cout<<"Enter 2 numbers for Addition: "<<endl;
	cin>>add_num1>>add_num2;
	cout<<"Enter 2 numbers for Substraction: "<<endl;
	cin>>sub_num1>>sub_num2;
	cout<<"Enter 2 numbers for Multiplication: "<<endl;
	cin>>mul_num1>>mul_num2;
	cout<<"Enter 2 numbers for Division: "<<endl;
	cin>>div_num1>>div_num2;
	cout<<"Enter 2 numbers for Modulus: "<<endl;
	cin>>mod_num1>>mod_num2;
	
	//	Operations
	sum = add_num1 + add_num2;
	mul = mul_num1 * mul_num2;
	div = div_num2 / div_num1;
	mod = mod_num1 % mod_num2;
	sub = sub_num2 - sub_num1;
	
	//	Output
	cout<<"\nCalculations"<<endl;
	cout<<"The sum of "<<add_num1<<" and "<<add_num2<<" is "<<sum<<endl;
	cout<<"The sub of "<<sub_num2<<" from "<<sub_num1<<" is "<<sub<<endl;
	cout<<"The mul of "<<mul_num1<<" and "<<mul_num2<<" is "<<mul<<endl;
	cout<<"The div of "<<div_num2<<" by "<<div_num1<<" is "<<div<<endl;
	cout<<"The mod of "<<mod_num1<<" of "<<mod_num2<<" is "<<mod<<endl;
		
	return 0;
}
