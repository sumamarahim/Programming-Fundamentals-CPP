/*
Name: Sumama Rahim
Reg# F24BSCS039
Date: 12/18/2024
QUIZ

*/
// Problem: WAP to swap 2 numbers, use function for swapping

#include <iostream>
using namespace std;

// solve last quiz: swapping 2 numbers using functions

void swapping_numbers(int num1, int num2)
{
//	int num1, num2, num3;
	int	num3 = num2;
	num2 = num1;
	num1 = num3;
//	cout<<"After Swapping"<<endl;
	cout<<"Num1 = "<<num1<<endl<<"Num2 = "<<num2<<endl;
//	return num1, num2; // can be return multiple values
}



int main()
{
	int num1 = 7;
	int num2 = 9;
	
	cout<<"Before swapping"<<endl;
	cout<<"Num1 = "<<num1<<endl<<"Num2 = "<<num2<<endl;
	
	// after swapping
	cout<<"After swapping"<<endl;
	swapping_numbers(num1, num2); // removed cout<< bcz the return type is void
//	cout<<swapping_numbers(num1, num2); // this is just case of return type int etc
	
}
