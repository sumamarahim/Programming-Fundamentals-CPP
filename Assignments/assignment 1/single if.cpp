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
	

	
	return 0;
}
