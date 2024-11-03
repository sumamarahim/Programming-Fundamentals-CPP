// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q10. Write a program in C++ to calculate the volume of a sphere.

// Program start
#include <iostream>
using namespace std;

int main(){
	/**
		formula for sphere volume is
		
		v = (4/3)*r^3*pi
		
	*/
	
	cout<<"**** Volume of Sphere ****"<<endl;
	
	// 	var declaration and initialisation
	float pi = 3.14, r;
	
	//	taking input from the user
	cout<<"\nEnter the radius of sphere: "<<endl;
	cin>>r;
	
	//	calculution
	float vol_sphere_formula = (((4*pi)/3)*(r*r*r));
	
	//	Displaying the volume on screen
	cout<<"\nThe Volume of Sphere for the radius "<<r<<" is: "<<vol_sphere_formula<<endl;
	
	return 0;
}
