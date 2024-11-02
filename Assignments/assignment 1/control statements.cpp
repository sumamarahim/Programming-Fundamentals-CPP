// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10292024
//
// Assignment # 1
//
// Problem 1: Write a program in C++ to check the number is positive, negative or zero: 
//	Using: Single If, Multiple if/s, Nested If, if-else, else-if etc

/* TOPICS: Selectional Logic
		Conditional (covered in this lecture)
		i. If/s and their types
		ii. switch statements
		
		unconditional
		i. goto
*/

// Program start
#include <iostream>
using namespace std;

int main(){
	// Start of Single If
	
	cout<<"\n\t**** Single If ****\n"<<endl;
	
	//	var declaration
	int single_if_num;
	
	//	take input
	cout<<"Enter a number to check it -ve, +ve, or ZERO: ";
	cin>>single_if_num;
	
	// condition
	if (single_if_num < 0)
	{
		cout<<"The given number is Negative"<<endl;
	}
	
	/*
	OutPut:
		let suppose number is >=0 then prints nothing else prints only the {if body message}
	*/
	
	/*
	Testing:
		Tested with negative, positive and zero, And this program working but not meet 
		required solution.

	NOTE:
		We are restricted to use only one if, SO
		to do so we are not probably able to meet the required program out criteria.
	 */
	 
	// End of Single If Program
	


	//	Start of Multiple If/s
	
	cout<<"\n\t**** Multiple If(s) ****\n"<<endl;
	
	//	Var declaration
	int multiple_if_num;
	
	//	taking input
	cout<<"Enter a number to check it is negative, positive or ZERO: ";
	cin>>multiple_if_num;
	
	// checking condition
	if ( multiple_if_num < 0 )
	{
		cout<<"The entered number is NEGATIVE "<<endl;
	}
	
	if ( multiple_if_num > 0 )
	{
		cout<<"The entered number is POSITIVE "<<endl;
	}
	
	if ( multiple_if_num == 0 )
	{
		cout<<"The entered number is ZERO "<<endl;
	}
	
	
	/*
	OutPut:
		let suppose number is <0 then prints NEGATIVE
		=0 then ZERO
		and
		>0 then POSITIVE
	*/
	
	/*
	Testing:
		Tested with negative, positive and zero, And this program working and meet 
		required solution. There is issue, if we press non number key it prints the last IF section		

	NOTE:
		We are restricted to use multiple if/s, SO
		to do so we are probably able to meet the required program out criteria but with 
		checking for zero we need to add one extra assignment operator to make it equal with the\
		data type as well.
	 */
	 
	// End of Multiple If/s Program



//	Start of Nested If
	
	cout<<"\n\t**** Nested If(s) ****\n"<<endl;
	
	// var declaration
	int nested_if_num;
	
	//	taking input
	cout<<"Enter a number: ";
	cin>>nested_if_num;
	
	//	checking the condition
	if ( nested_if_num < 0 | nested_if_num > 0 )
	{
		if (nested_if_num < 0)
		{
			cout<<"The entered number is NEGATIVE"<<endl;
		}
		
		if (nested_if_num > 0)
		{
			cout<<"The entered number is POSITVE"<<endl;
		}
		
		if (nested_if_num == 0)
		{
			cout<<"The entered number is ZERO"<<endl;
		}
	}
	
	else
	{
		cout<<"The entered number is ZERO - Outside"<<endl;
	}
	
	
	
	/*
	OutPut:
		let suppose number is <0 then prints NEGATIVE
		=0 then ZERO
		and
		>0 then POSITIVE
	*/
	
	/*
	Testing:
		Tested with negative, positive and zero, And this program working and meet 
		required solution. There is a problem at ZERO it is not showing the inside the 
		nested last if

	NOTE:
		We are restricted to use Nested if, SO
		to do so we are probably able to meet the required program out criteria but with 
		checking for zero we need to add one extra assignment operator to make it equal with the\
		data type as well.
	 */
	 
	// End of Nested If Program
	
	
	
		//	Start of If-else
	
	cout<<"\n\t**** If-Else ****\n"<<endl;
	
	//	var declaration
	int if_else_num;
	
	// taking input
	cout<<"Enter a number: ";
	cin>>if_else_num;
	
	if ( if_else_num < 0)
	{
		cout<<"Number is NEGATIVE"<<endl;
	}
	
	if (if_else_num > 0)
	{
		cout<<"Number is POSITVIE"<<endl;
	}
	
	else
	{
		cout<<"Number is ZERO"<<endl;
	}
	
		
	/*
	OutPut:
		let suppose number is <0 then prints NEGATIVE AND ZERO both
		=0 then ZERO
		and
		>0 then POSITIVE
	*/
	
	/*
	Testing:
		Tested with negative, positive and zero, And this program working and meet 
		required solution. But there is a problem here, if we enter NEGATIVE number it executes
		first IF and ELSE part.

	NOTE:
		We are restricted to use Nested if, SO
		to do so we are probably able to meet the required program out criteria but with 
		checking for zero we need to add one extra assignment operator to make it equal with the\
		data type as well. 
	 */
	 
	// End of Nested If Program
	
	
	
	
	//	Start of Else-if
	
	cout<<"\n\t**** Else If (or Elf in short) ****\n"<<endl;
	
	//	var declaration
	int else_if_num;
	
	//	taking input
	cout<<"Enter a number: ";
	cin>>else_if_num;
	
	//	checking the conditions
	if ( else_if_num < 0)
	{
		cout<<"Number is NEGATIVE"<<endl;
	}
	
	else if ( else_if_num > 0)
	{
		cout<<"Number is POSITIVE"<<endl;
	}
	else if ( else_if_num == 0)
	{
		cout<<"Number is ZERO"<<endl;
	}
	
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	
	//	End of Else-if 

	
	
	//	start of switch statement
	
	cout<<"\n\t**** Switch Statment ****\n"<<endl;
	
	//	var declaration
	int switch_num;
	
	// taking input
	cout<<"Enter 0, 1, or -1: ";
	cin>>switch_num;
	
	// checking the input number
	switch (switch_num)
	{
	case 0:
		cout<<"Zero"<<endl;
		break;
	case 1:
		cout<<"Positive One"<<endl;
		break;
	case -1:
		cout<<"Negative One"<<endl;
		break;
	default:
		cout<<"You entered other number"<<endl;
	}
	
	
	/**
				****	The End		****
		
		
	*/


	
	return 0;
}
