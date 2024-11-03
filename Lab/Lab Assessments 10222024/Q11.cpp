// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q11. Write a program in C++ to find the Area and Perimeter of a Rectangle.

// Program start
#include <iostream>
using namespace std;

int main(){
	cout<<"**** Area and Perimeter of a Rectangle ****"<<endl;
	
	// var declaration
	float length, width, area, perimeter;
	
	//	taking input from the user
	cout<<"\nEnter the length of Ractangle: "<<endl;
	cin>>length;
	cout<<"Enter the width of Ractangle: "<<endl;
	cin>>width;
	
	//	Calculations
	area = length * width;
	perimeter = 2 * (length + width);
	
	//	Displaying the output
	cout<<"Area of Rectangle is | "<<area<<" | when length is "<<length<<" and width is "<<width<<endl;
	cout<<"Perimeter of Rectangle is | "<<perimeter<<" | when length is "<<length<<" and width is "<<width<<endl;
	
	return 0;
}
