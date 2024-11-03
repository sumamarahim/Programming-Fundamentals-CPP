// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q12.	Write a program in C++ to convert temperature in Celsius to Fahrenheit.

// Program start
#include <iostream>
using namespace std;

int main(){
	/**
		Celsius to Fahrenheit formula
		f = c*(9/5)+32
	*/
	cout<<"\n\t**** Celsius To Fahrenheit ****"<<endl;
	
	//	Var declarations
	float temp_celsius, celsius_to_fahrenheit;
	
	//	input from the user
	cout<<"\nEnter the Temparature in Celsius: ";
	cin>>temp_celsius;
	
	//	conversion from celsius to fahrenheit
	celsius_to_fahrenheit = temp_celsius*(1.8)+32;
	
	cout<<"The temparature in fahrenheit is: "<<celsius_to_fahrenheit<<endl;
	
	return 0;
}
