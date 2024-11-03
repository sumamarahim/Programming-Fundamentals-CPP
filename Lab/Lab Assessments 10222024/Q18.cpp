// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q18.	Write a program in C++ to check whether a number is positive, negative or zero. (Use single if)

// Program start
#include <iostream>
using namespace std;

int main(){
	//	check number is +ve, -ve or Zero using single if only
	cout<<"\n\t**** Check +ve, -Ve, or Zero ****"<<endl;
	
	//	var daclaration
	int check_num;
	
	//	taking input
	cout<<"Enter a number to check it is positive, negative or ZERO"<<endl;
	cin>>check_num;
	
	//	checking conditions
	if (check_num < 0)
	{
		cout<<"The number is NEGATIVE"<<endl;
	}
	
//	cout<<"The number is POSITIVE or ZERO"<<endl;	// this will be prints when the condition is true or false in both situations

	/**
		Output testing:
			let suppose 
			num < 0, it prints NEGATIVE
			num = 0, prints nothing
			num > 0, prints nothing
			
		NOTE:
			As we are restricted to use only 1 if in whole program, todo so we are not 
			able to get the exect required solution for this problem.
	*/
	return 0;
}
