// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q13.	Write a program in C++ to convert temperature in Fahrenheit to Celsius.

// Program start
#include <iostream>
using namespace std;

int main(){
	/**
		Fahrenheit to Celsius formula
		c = (f-32)*(5/9)
		
		C to F
		f = c*(9/5)+32
		
	*/
	cout<<"**** Fahrenheit To Celsius ****"<<endl;
	
	//	Var declarations
	float temp_fahrenheit, fahrenheit_to_celsius;
	
	//	input from the user
	cout<<"\nEnter the Temparature in Fahrenheit: ";
	cin>>temp_fahrenheit;
	
	//	conversion from fahrenheit to celsius
	fahrenheit_to_celsius = (temp_fahrenheit - 32)*(0.556);
	
	cout<<"The temparature in Celsius is: "<<fahrenheit_to_celsius<<endl;
	
	return 0;
}
