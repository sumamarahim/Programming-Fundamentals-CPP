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

	
	
	
	return 0;
}
