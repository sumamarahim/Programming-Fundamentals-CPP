/***
	Name: Sumama Rahim
	Reg# F24BSCS-039
	Programming Fundamentals - Lab Manual
	BS CS F24 Morning Section A
	--------------------------------------
	
	Practical No.7 Relational & Logical Operators

*/

// Start of Program

#include <iostream>
using namespace std;

int main(){
//	/**************************** START OF LAB EXERCISE 1 ********************************/
//	/*
//		Lab Exercise # 1:
//			Execute following program and interpret the output
//
//			 int X1=-1, X2=1, Y1, Y2;
//			 Y1 = !X1 && X2;
//			 Y2 = !X1 || X2;
//			 cout<<” Y1 = ”<<Y1<<endl;
//			 cout<<” Y2 = ”<<Y2<<endl;
//	*/
//	// Solution
//	
//	// Execution
//	int X1=-1, X2=1, Y1, Y2;
//	Y1 = !X1 && X2; // not -1 && 1
//	Y2 = !X1 || X2; // not -1 || 1
//	cout<<" Y1 = "<<Y1<<endl;
//	cout<<" Y2 = "<<Y2<<endl;
//	
//	// Interpretation the output
//	/**
//	1. initialisation of variables X1 to -1 and X2 to 1
//		
//	2. initialisation to Y1 and Y2, which is !X1 && X2 and !X1 || X2
//		in this step we have some important points 
//		i. Logical NOT (!)
//			this will negates the value of X1, and -1 is not zero, so ! (NOT) means it is ZERO (0)
//		ii. Logical AND (&&)
//			this will compare both !X1 and X2 values with &&, !X1 is 0 (in this case) and X2 is 1. 
//			Comparing both with AND so it is FALSE LOGICALLY (0 AND 1)
//		iii. Logical OR (||)
//			this will compare both !X1 and X2 values with ||, so 0 || 1 is LOGICALLY TRUE
//	3. Output
//		Y1 = 0 (FALSE)
//		Y2 = 1 (TRUE)
//	*/
//	
//	/**************************** END OF LAB EXERCISE 1 ********************************/

	
	/**************************** START OF LAB EXERCISE 2 ********************************/
	/*		
		Lab Exercise # 2:
			Write a C++ Program that uses the logical AND operator to avoid division by zero: 
			(Hint: (y != 0) && (x / y)
	*/
	// Dividing by ZERO
	int x = 4, y = 0;
	
	cout<<"Divide by ZERO "<<x/y<<endl;
	
	// Avoid dividing by ZERO
	int a = 4, b = 4;
	
	cout<<((b != 0)&&(a/b));
	/*** NOT COMPLETED */
	
	cout<<"Subject\t\tMarks\nMathematics\t90\nComputer\t77\nChemistry\t69"<<endl;
	
	/**************************** END OF LAB EXERCISE 2 ********************************/
	
	return 0;
}
