// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q20.	Write a Program to Find the Largest Among 3 Numbers. (Use single if)

// Program start
#include <iostream>
using namespace std;

int main(){
	cout<<"\n\t**** Find Largest Among 3 Numbers ****"<<endl;
	//	var declaration
	int num1, num2, num3;
	
	
	//	taking input
	cout<<"Enter 3 numbers to check for largest\n"<<endl;
	cout<<"enter first number: ";
	cin>>num1;
	cout<<"enter second number: ";
	cin>>num2;
	cout<<"enter third number: ";
	cin>>num3;
	
	
	//	checking conditions
	if ( num1 > num2 && num1 > num3)
	{
		cout<<num1<<" is greater number"<<endl;
	}
	
	//	restriction: Use only SINGLE IF
	
//	if ( num2 > num1 && num2 > num3)
//	{
//		cout<<num2<<" is greater number"<<endl;
//	}
//	
//	if ( num3 > num1 && num3 > num2)
//	{
//		cout<<num3<<" is greater number"<<endl;
//	}


	/**
		Output testing:
		
			let suppose 
			INPUT 1
				num1 = 5, 
				num2 = 3, 
				num3 = 1,
			OUTPUT: prints 5 is greater number 
			
			INPUT 2
				num1 = 3,
				num2 = 5,
				num3 = 1,
			OUTPUT: prints nothing
			
			INPUT 3
				num1 = 1,
				num2 = 3,
				num3 = 5,
			OUTPUT: prints nothing
			
			INPUT 4
				num1 = 4,
				num2 = 4,
				num3 = 3,
			OUTPUT: prints nothing
			
		NOTE:
			As we are restricted to use only 1 if in whole program, todo so we are not 
			able to get the exact required solution for this problem.
	*/
	

	
	return 0;
}
