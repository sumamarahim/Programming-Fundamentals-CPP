// Basic calculator using functions

#include <iostream>
using namespace std;

// addition using functions
int add()
{
	int num1, num2, add;
	cout<<"Enter first number: \t|"<<endl;
	cin>>num1;
	cout<<"\t\t\t|"<<endl;
	cout<<"Enter second number: \t|"<<endl;
	cin>>num2;
	cout<<"\t\t\t|"<<endl;
	add = num1 + num2;
	cout<<"The answer is: "<<add<<"\t|"<<endl;
	return 0;
}

// subraction
int subtract()
{
	int num1, num2, sub;
	cout<<"Enter number 1: \t|"<<endl;
	cin>>num1;
	cout<<"\t\t\t|"<<endl;
	cout<<"Enter number 2: \t|"<<endl;
	cin>>num2;
	cout<<"\t\t\t|"<<endl;
	sub = num2 - num1;
	cout<<"The answer is: "<<sub<<"\t|"<<endl;

}

// multiplication
int multiply()
{
	int num1, num2, mul;
	cout<<"Enter number 1: \t|"<<endl;
	cin>>num1;
	cout<<"\t\t\t|"<<endl;
	cout<<"Enter number 2: \t|"<<endl;
	cin>>num2;
	cout<<"\t\t\t|"<<endl;
	mul = num1*num2;
	cout<<"The answer is: "<<mul<<"\t|"<<endl;
}

// division
float divide()
{
	float num1, num2, div;
	cout<<"Enter quotient: \t|"<<endl;
	cin>>num1;
	cout<<"\t\t\t|"<<endl;
	cout<<"Enter divider: \t\t|"<<endl;
	cin>>num2;
	cout<<"\t\t\t|"<<endl;
	div = num1/num2;
	cout<<"The answer is: "<<div<<"\t|"<<endl;
}

int main()
{
	cout<<"Basic Calculation and Operations"<<endl;
	cout<<"Select Option from Below"<<endl;
	cout<<"1. Additon\n2. Subtract\n3. Multiply\n4. Divide"<<endl;
	cout<<"\n************************|"<<endl;
	int option;
	cin>>option;
	cout<<"\t\t\t|"<<endl;
	switch (option)
	{
		case 1:
			add();
			break;
		case 2:
			subtract();
			break;
		case 3:
			multiply();
			break;
		case 4:
			divide();
			break;
		default:
			cout<<"Wrong option selected, select 1, 2, 3 and 4 only!"<<endl;
	}
	cout<<"*************************"<<endl;	
	
	return 0;
}
