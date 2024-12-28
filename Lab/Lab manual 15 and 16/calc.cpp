#include <iostream>
using namespace std;
// addition
int add()
{
	int num1, num2, sum;
	cout<<"enter 2 numbers"<<endl;
	cin>>num1>>num2;
	sum = num1+num2;
	cout<<"The sum is: "<<sum;
}

int subtraction()
{
	int num1, num2, sub;
	cout<<"enter 2 numbers"<<endl;
	cin>>num1>>num2;
	sub = num2 - num1;
	cout<<num2<<" - "<<num1<<" = "<<sub<<endl;
}

int multiplication()
{
	int num1, num2, mul;
	cout<<"Enter 2 numbers"<<endl;
	cin>>num1>>num2;
	mul = num1*num2;
	cout<<"Multiplication is: "<<mul<<endl;
}

float division()
{
	float num1, num2, div;
	cout<<"Enter 2 numbers"<<endl;
	cin>>num1>>num2;
	div = num2/num1;
	cout<<num2<<" / "<<num1<<" = "<<div<<endl;
}

int main()
{
	int option; // taking option
	// displaying msg
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cin>>option;
	
	// checking the option
	if (option == 1)
	{
		add();
	}
	else if (option == 2)
	{
		subtraction();
	}
	else if (option == 3)
	{
		multiplication();
	}
	else if (option == 4)
	{
		division();
	}
	else
	{
		cout<<"Wrong input please select only 1, 2, 3 or 4"<<endl;
	}
	return 0;
}
