// Name: Sumama Rahim
// Reg# F24BSCS-039           
// Department: IET, BS-CS F24 - Morning 
// Date: 12/13/2024
//
// Home Assignment

/*
Write a C++ program that
	1. Declare and initializ 1D array of size 10 and type float
	2. Initialize array at run time (and have Random number)
	3. Print Max and Min Value from inside array
*/

#include <iostream>
using namespace std;

int main(){
	
//	float num[10] = {1.1, 2.2, 3.3, 4.4, 1.03, 7.1, 9.8, 6.2, 0.9, 10.1};
	float num[10];
	
	for (int i = 0; i < 10; i++)
	{
		cout<<"Enter number "<<i+1<<" : ";
		cin>>num[i];
	}
	
	
	// print minimum and maximum number 
	float minimum_number = num[0];
	float maximum_number = num[0];
	
	
	// method 1 - do in seperate loops ( 2 loops)
	// finding the maximum number in the array
	for (int i = 0; i < 10; i++)
	{
//		if (maximum_number > num[i])
		if (num[i] > maximum_number)
		{
			maximum_number = num[i];
		}
	}
	cout<<maximum_number<<" is the maximum number!"<<endl; // print maximum number
	
	// finding the minimum number in the array
	for (int i = 0; i < 10; i++)
	{
		if (num[i] < minimum_number)
		{
			minimum_number = num[i];
		}
	}
	cout<<minimum_number<<" is the minimum number!"<<endl; // print minimum number

	float min = num[0];
	float max = num[0];
	
	// method 2 - do in a single loops
	for (int i = 0; i < 10; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
		}
		
		if (num[i] > max)
		{
			max = num[i];
		}
	}
	cout<<"Minimum is: "<<min<<endl;
	cout<<"Maximum is: "<<max<<endl;
	
	
	/***
	
	CHECK WHICH METHOD IS LOGICALLY GOOD AND EASY
	
	SUBMIT THAT ONE - REMOVE OTHER
	
	****/
	
	return 0;
}
