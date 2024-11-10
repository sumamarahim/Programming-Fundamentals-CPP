/***
	Name: Sumama Rahim
	Reg# F24BSCS-039
	Programming Fundamentals - Lab Manual
	BS CS F24 Morning Section A
	--------------------------------------
	
	Practical No. 9 Nested IF, Nested If-Else, Switch statements

*/

// Start of Program

#include <iostream>
using namespace std;

int main(){
//	/**************************** START OF LAB EXERCISE 1 ********************************/
//	/*
//		Lab Exercise # 1:
//			Write a program which input three numbers and display the largest number. 
//			Find Largest Number Using
//			Nested if...else statement.
//
//	*/
//	
//	// Solution
//	int num1, num2, num3;
//	
//	// taking input
//	cout<<"Enter 3 numbers to find largest number: ";
//	cin>>num1>>num2>>num3;
//	
//	// checking
//	if (num1 > num2 && num1 > num3)
//	{
//		cout<<"Num1 is greater";
//	}
//	else if (num2 > num3 && num2 > num1)
//	{
//		cout<<"Num2 is greater";
//	}
//	else 
//	{
//		cout<<"Num3 is greater";
//	}
//	
	/**************************** END OF LAB EXERCISE 1 ********************************/

	
//	/**************************** START OF LAB EXERCISE 2 ********************************/
//	/*		
//		Lab Exercise # 2:
//			Write a program that print total number of days in a month using switch case.
//	
//	*/
//	
//	// Solution
//	int month;
//	
//	month = 10;
//	
//	switch (month)
//	{
//	case (1):
//		cout<<"31 days";
//		break;
//	case (2):
//		cout<<"28/29 days";
//		break;
//	case (3):
//		cout<<"31 days";
//		break;
//	case (4):
//		cout<<"30 days";
//		break;
//	case (5):
//		cout<<"31 days";
//		break;
//	case (6):
//		cout<<"30 days";
//		break;
//	case (7):
//		cout<<"31 days";
//		break;
//	case (8):
//		cout<<"31 days";
//		break;
//	case (9):
//		cout<<"30 days";
//		break;
//	case (10):
//		cout<<"31 days";
//		break;
//	case (11):
//		cout<<"30 days";
//		break;
//	case (12):
//		cout<<"31 days";
//		break;
//	default:
//		cout<<"Not a month";
//	
//	}
//	
	/**************************** END OF LAB EXERCISE 2 ********************************/







	
	/**************************** START OF LAB EXERCISE 3 ********************************/
	/*		
		Lab Exercise # 3:
			Write a C++ Program to Make a Simple Calculator to Add, Subtract, 
			Multiply or Divide Using Switch...case.
	*/
	
	// Solution
	
	int num1, num2, operand;
	
	// taking input
	cout<<"enter 2 numbers: "<<endl;
	cin>>num1>>num2;
	cout<<"Enter operands (+, -, *, /): ";
	cin>>operand;
	
	// operations
	switch(operand)
	{
		case '+':
			cout<<"Sum is: "<<num1+num2<<endl;
			break;
		case '-':
			cout<<"Difference is: "<<num2-num1<<endl;
			break;
		case '/':
			cout<<"Division is: "<<num1/num2<<endl;
			break;
		case '*':
			cout<<"Multiplication is: "<<num2*num1<<endl;
			break;
	}
	
	/**************************** END OF LAB EXERCISE 3 ********************************/


	
	return 0;
}
