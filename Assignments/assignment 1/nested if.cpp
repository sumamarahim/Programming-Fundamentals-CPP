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
	
	
	return 0;
}
