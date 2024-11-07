/***
	Name: Sumama Rahim
	Reg# F24BSCS-039
   Date: 11062024
	Programming Fundamentals - Lab Manual
	BS CS F24 Morning Section A
	--------------------------------------
	
	Practical N0.4: Arithmetic Operators, Expression 

*/

// Start of Program

#include <iostream>
using namespace std;

int main(){
	/**************************** START OF LAB EXERCISE 1 ********************************/
	/*
	Lab Exercise # 1:
		Write a Program to Add, Subtract, Multiply and Divide 
		two Numbers and display it on screen.
	*/
	
	// Solution
//	Don't include CIN else you'll get ZERO marks
//	// Adding two numbers
//	// Var Decalaration
//	int add_num1, add_num2, add;
//	
//	// Taking input from the user
//	cout<<"Enter two numbers to add: ";
//	cin>>add_num1>>add_num2;
//	
//	add = add_num1 + add_num2;
//	
//	cout<<"Addition: "<<add<<endl;
//	
//	
//	// Subtracting 
//	int sub_num1, sub_num2, sub;
//	
//	// Taking input from the user
//	cout<<"\nEnter two numbers to subtract: ";
//	cin>>sub_num2>>sub_num1;
//	
//	sub = sub_num2 - sub_num1;
//	
//	cout<<"Subtraction: "<<sub<<endl;
//	
//	// Multiply
//	int mul_num1, mul_num2, mul;
//	
//	// Taking input from the user
//	cout<<"\nEnter two numbers to multiply: ";
//	cin>>mul_num1>>mul_num2;
//	
//	mul = mul_num1 * mul_num2;
//	
//	cout<<"Multiplication: "<<mul<<endl;
//	
//	
//	// Divide
//	int div_num1 = 9, div_num2 = 81, div;
//	
//	
//	cout<<"\nDivide: "<<(div_num2/div_num1)<<endl;
//	
	
	/**************************** END OF LAB EXERCISE 1 ********************************/
	
	
	
	/**************************** START OF LAB EXERCISE 2 ********************************/
	/*
	Lab Exercise # 2:
		Write a Program that takes two Numbers with fractional parts at run time, Add, Subtract, Multiply and
		Divide them and display it on screen.	
	*/
	
	// Solution
	
	// var daclaration
	float num1, num2, add, sub, mul, div;
	
	// Taking input from the user
	cout<<"Enter Two Numbers: "<<endl;
	cin>>num1>>num2;
	
	// Operations
	add = num1 + num2;
	sub = num2 - num1;
	mul = num1 * num2;
	div = num2/num2;

	// Displaying Results
	cout<<"Add: "<<add<<endl;
	cout<<"Sub: "<<sub<<endl;
	cout<<"Mul: "<<mul<<endl;
	cout<<"Div: "<<div<<endl;

	
	/**************************** END OF LAB EXERCISE 2 ********************************/
	
	
	return 0;
}
