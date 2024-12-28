// lab 3. Write a C++ program to convert temperature from Fahrenheit to Centigrade using function.

#include <iostream>
using namespace std;

// prototype of a function that is declared after call, which is needed in that case
int fahrenheit_to_centigrade();

int main()
{
	fahrenheit_to_centigrade(); // calling the function

	return 0;
}


// formula: °C = (°F - 32) × 5/9
// declaring the function
float fahrenheit_to_centigrade()
{
	float temp_fah, formula;
	cout<<"enter temperature in fahrenheit: ";
	cin>>temp_fah;
	formula = (temp_fah - 32) * 0.56; // formula used to convert
	cout<<formula;
}
