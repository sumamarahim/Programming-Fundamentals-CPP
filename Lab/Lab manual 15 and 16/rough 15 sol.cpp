// lab 1. Write a C++ program that adds two integers using a function “sum”.
#include <iostream>
using namespace std;

int sum(); // prototype of a function that is declared after call, which is needed in that case

int main()
{
	sum(); // calling the function
	return 0;
}

// function declaration
int sum()
{
	int num1, num2;
	cout<<"Enter 2 numbers to add"<<endl;
	cin>>num1>>num2;
	cout<<"The sum = "<<num1+num2;
}
