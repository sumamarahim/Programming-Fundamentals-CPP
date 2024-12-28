#include <iostream>
using namespace std;
void main_menu()
{
	cout<<"1. Square"<<endl;
	cout<<"2. Arithmetic Operations"<<endl;
	cout<<"3. Greater number"<<endl;
	cout<<"4. Smallest number"<<endl;
	cout<<"5. Even converter"<<endl;
	cout<<"6. Odd converter"<<endl;
	cout<<"7. Multiply with 9"<<endl;
	int options;
	cin>>options;
	// options to select
	if (options == 1)
	{
		int square();
		square();
	}
	else if (options == 2)
	{
		int arithmetic_operations();
		arithmetic_operations();
	}
	else if (options == 3)
	{
		int greater_number();
		greater_number();
	}
	else if (options == 4)
	{
		int smallest_number();
		smallest_number();
	}
	else if (options == 5)
	{
		int even_converter();
		even_converter();
	}
	else if (options == 6)
	{
		int odd_converter();
		odd_converter();
	}
	else if (options == 7)
	{
		int multiply_9();
		multiply_9();
	}
	else
	{
		cout<<"Wrong input!"<<endl;
	}
}


// sub menus

int square()
{
	int num;
	cout<<"Enter a number to find square of it: ";
	cin>>num;
	cout<<"Square of "<<num<<" is "<<num*num<<endl;
}


int arithmetic_operations()
{
	int option;
	// sub menu of arithmetic operations
	cout<<"1. Add"<<endl;
	cout<<"2. Subtract"<<endl;
	cout<<"3. Divide"<<endl;
	cout<<"4. Multiply"<<endl;
	cin>>option;
	
	// checking the option
	if (option == 1)
	{
		cout<<"enter 2 number"<<endl;
		int num1, num2;
		cin>>num1>>num2;
		cout<<"Sum = "<<num1+num2<<endl;
	}
	else if (option == 2)
	{
		cout<<"Enter 2 number"<<endl;
		int num1, num2;
		cin>>num1>>num2;
		cout<<"Sub = "<<num2-num1<<endl;
	}
	else if (option == 3)
	{
		cout<<"Enter 2 numbers"<<endl;
		float num1, num2;
		cin>>num1>>num2;
		cout<<"Div = "<<num2/num1<<endl;
	}
	else if (option == 4)
	{
		cout<<"Enter 2 numbers"<<endl;
		int num1, num2;
		cin>>num1>>num2;
		cout<<"Mul = "<<num1*num2<<endl;
	}
	else
	{
		cout<<"Wrong input!"<<endl;
	}
}

int greater_number()
{
	cout<<"Enter 2 numbers to find greater number"<<endl;
	int num1, num2;
	cin>>num1>>num2;
	if (num1 > num2)
	{
		cout<<num1<<" is greater than "<<num2<<endl;
	}
	else
	{
		cout<<num2<<" is greater than "<<num1<<endl;
	}
}


int smallest_number()
{
	int num1, num2;
	cout<<"Enter 2 numbers to find smallest number"<<endl;
	cin>>num1>>num2;
	if (num1 < num2)
	{
		cout<<num1<<" is smallest than "<<num2<<endl;
	}
	else
	{
		cout<<num2<<" is smallest than "<<num1<<endl;
	}
}

int even_converter()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	int rem;
	rem = num % 2;
	if (rem == 0)
	{
		cout<<"Already it is even"<<endl;
	}
	else
	{
		int new_num = num+1;
		cout<<"number is not even so changed from "<<num<<" to "<<new_num<<endl;
	}
}

int odd_converter()
{
	int num, new_num;
	cout<<"Enter odd number"<<endl;
	cin>>num;
	new_num = num % 2;
	if (new_num != 0)
	{
		cout<<"It is already odd!"<<endl;
	}
	else
	{
		cout<<"number is not odd so changed from "<<num<<" to "<<num+1<<endl;
	}
}


int multiply_9()
{
	int num;
	cout<<"Enter a number to multiply with 9: "<<endl;
	cin>>num;
	cout<<"Required output is "<<num*9<<endl;
}

int main()
{
	// showing main menu
	main_menu();
	return 0;
}
