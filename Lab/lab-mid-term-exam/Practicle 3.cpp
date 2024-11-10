// Name: Sumama Rahim
// Reg# F24BSCS-039

// Practicle Exam
// Date: 11/07/2024

// Practical N0 3: Learning data-types, variables, constants

#include <iostream>

using namespace std;

int main(){
	// Lab Exerice 1: Confirms Size of each data type.
	
	 cout << "Size of char : " << sizeof(char) << endl;
	 cout << "Size of int : " << sizeof(int) << endl;
	 cout << "Size of short int : " << sizeof(short int) << endl;
	 cout << "Size of long int : " << sizeof(long int) << endl;
	 cout << "Size of float : " << sizeof(float) << endl;
	 cout << "Size of double : " << sizeof(double) << endl;
	 
	// Output report
	/**
	
	Char: 1
	Int; 4
	Short int: 2
	long int: 4
	Float: 4
	double: 8
	
	*/

	// Lab Exercise # 2: Write a program that takes a character, floating point number, Boolean input at run time and display each on console window on a different line.
	
	char gender;
	float hieght;
	bool attandee;
	
	// taking input from the user
	cout<<"Enter your gender (m/f): ";
	cin>>gender;
	
	cout<<"Enter your hieght: ";
	cin>>hieght;
	
	cout<<"Enter your attandance (1/0): ";
	cin>>attandee;


	// displaying the inputs
	cout<<"The Gender: "<<gender<<" \nhas hieght of: "<<hieght<<" \nand s/he is: "<<attandee<<endl;
	
	
	
	// Lab Exercise 3: Write a program and confirm the following boolean variables output.
	/*

		bool var1 = !true
		bool var2 =false
		bool var3 = true
		bool = !false
	
	*/
	
	// variables
		bool var1 = !true;
		bool var2 = false;
		bool var3 = true;
//		bool = !false;
	
	// checking
	cout<<"var1 = "<<var1<<endl; // output is TRUE
	cout<<"var2 = "<<var2<<endl; // output is FALSE
	cout<<"Var3 = "<<var3<<endl; // TRUE
		
	
	

	return 0;
}

