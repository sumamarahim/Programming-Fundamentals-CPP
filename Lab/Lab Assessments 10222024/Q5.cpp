// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q5. Write a program in C++ to display various type or arithmetic operation using mixed data type.

// Program start
#include <iostream>
using namespace std;

int main(){
	cout<<"**** Arithmetic Operations ****"<<endl;
	
	/**
		Different Data Types for Arithmetic Operations
		1. int
		2. float
		3. double
		4. long double
		5. unsigned etc 
		
		a. perform some area etc calc
		b. some BMI etc calc using height and weight etc
		
		Operations 
		+,-, x, /, % etc
		
		BMI = height x weight
		area of rectangle = length x width
		perimeter of rectangle = 2 ( length + width )
		find square and cube of a number = x * x, x * x * x
		
		// these should be apply in any other program
		
	*/
	// declaration of variables
	int sum_num1, sum_num2, sum; // for sum
	int minus_num1, minus_num2, minus; // for substract
	int mul_num1, mul_num2, multiply; // for multiply
	float div_num1, div_num2, divide; // for division
	int mod_num1, mod_num2, modulus; // for reminder, modulus works only on int type
	long double num1, num2, num3, num4, num5, num6, mixed_operations; // for mixed
	
	// initialisation of variables
	sum_num1 = 3;
	sum_num2 = 2;
	
	minus_num1 = 7;
	minus_num2 = 4;
	
	mul_num1 = 3;
	mul_num2 = 7;
	
	div_num1 = 9;
	div_num2 = 4;
	
	mod_num1 = 9;
	mod_num2 = 2;
	
	// mixed operations var init
	num1 = 25.5, num2 = 3.5, num3 = 3.5, num4 = 3.5, num5 = 40.5 , num6 = 4.5;
	
	
	
	// operations
	sum = sum_num1 + sum_num2;
	minus = minus_num2 - minus_num1;
	multiply = mul_num1 * mul_num2;
	divide = div_num1 / div_num2;
	modulus = mod_num1 % mod_num2;
	mixed_operations = (num1 * num2 - num3 * num4) / (num5 - num6);
	
	
	// printing the results
	cout<<"\nSum: "<<sum<<endl;
	cout<<"Minus: "<<minus<<endl;
	cout<<"Multiply: "<<multiply<<endl;
	cout<<"Divide: "<<divide<<endl;
	cout<<"Modulus: "<<modulus<<endl;
	cout<<"Mixed operations: "<<mixed_operations<<endl;
	
		
	return 0;
}
