// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q17. Write a program in C++ to compute the total and average of four numbers.

// Program start
#include <iostream>
using namespace std;

int main(){
	cout<<"**** Copmute total and average ****"<<endl;
	// var
	float num1, num2, num3, num4, total, average;
	
	// input
	cout<<"Enter 4 Subject Marks: "<<endl;
	cin>>num1>>num2>>num3>>num4;
	
	// computation
	total = num1 + num2 + num3 + num4;
	average = total/4;
	
	// output
	cout<<"Total marks is: "<<total<<endl;
	cout<<"Average is: "<<average<<endl;
	
	
	return 0;
}
