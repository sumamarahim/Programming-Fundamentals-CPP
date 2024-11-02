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
	
	
	
	return 0;
}
