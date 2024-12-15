// Name: Sumama Rahim
// Reg# F24BSCS-039
// Department: IET, BS-CS F24 - Morning 
// Date: 12/13/2024

// Lab Manual - Pratical 12 and 13

// Lab Excercise # 1:
// Write a C++ program that defines a 1-D Array. Initialize it at run time and print the stored values using while loop.

#include <iostream>
using namespace std;

int main(){
	// array to store the values
	int a[5];
	int i; // variable for the loop 
	// taking values in run time
	cout<<"Taking numbers from the user at run time\n";
	i = 0;
	while (i <= 4)
	{
		cout<<"Enter number "<<i+1<<" ";
		cin>>a[i];
		i++;
	}
	
	// printing the store values
	i = 0;
	cout<<"\nThe stored values are"<<endl;
	while (i <= 4)
	{
		cout<<a[i]<<endl;
		i++;
	}
	
	return 0;
}
