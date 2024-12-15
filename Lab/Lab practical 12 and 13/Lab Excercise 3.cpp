// Name: Sumama Rahim
// Reg# F24BSCS-039           
// Department: IET, BS-CS F24 - Morning 
// Date: 12/13/2024

// Lab Manual - Pratical 12 and 13

// Lab Excercise # 3:
// Write a C++ Program to Find Largest Element of an Array.

#include <iostream>
using namespace std;

int main(){
	// array to store the values
	int number[5]; // let store 5 numbers
	int i; // variable for the loop 
	
	// taking values in run time
	cout<<"Number Taking"<<endl<<endl;
	i = 0;
	while (i <= 4)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>number[i];
		i++;
	}
	
	// finding the largest element
	i = 0;
	int large_number = number[0]; // let suppose, largest element is in index 0
	while (i <= 4)
	{
		if (number[i] > large_number)
		{
			large_number = number[i];
		}
		i++;
	}
	// printing the largest number
	cout<<large_number<<" is largest number"<<endl;
	
	return 0;
}
