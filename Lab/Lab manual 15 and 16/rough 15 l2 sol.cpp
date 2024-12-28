// lab 2. Write a C++ program that add two integers using a function “sum” 
// and pass the numbers as parameter to the user defined functions.

#include <iostream>
using namespace std;

// prototype of a function that is declared after call, which is needed in that case
int sum(int num1, int num2);

int main()
{
	int num1, num2;
	sum(num1, num2); // calling the function

	return 0;
}

int sum(int num1, int num2) // user defined function
{
	cout<<"Enter 2 numbers to add"<<endl;
	cin>>num1>>num2;
	cout<<"The sum = "<<num1+num2;
}
