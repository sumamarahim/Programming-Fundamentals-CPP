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
	
	
	
	return 0;
}
