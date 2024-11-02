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

	
	
	
	return 0;
}
