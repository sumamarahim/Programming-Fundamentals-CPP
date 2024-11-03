// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q19.	Write a Program to Check Even or Odd Integers. (Use single if)

// Program start
#include <iostream>
using namespace std;

int main(){
	cout<<"\n\t**** Check Even or Odd Integers ****"<<endl;
	
	//	var daclaration
	int check_num;
	
		
	//	taking input
	cout<<"Enter an EVEN or ODD number: ";
	cin>>check_num;
	
	
	//	checking conditions
	if ( check_num = check_num % 2)
	{
		cout<<"The number is ODD"<<endl;
	}
	
//	
//	// find if even numbers only - JUST FOR TESTING PURPOSE
//	int num;
//	cout<<"Enter a number: ";
//	cin>>num;
//	if ( num % 2 == 0)
//	{
//		cout<<num<<" is EVEN"<<endl;
//	}
//	
	
	//	this will be prints if the condition is TRUE or FALSE in both situations
//	cout<<"The number is EVEN"<<endl;
	
	/**
		Output testing:
			let suppose 
			num = 2, it prints nothing
			num = 3, prints ODD
			
		NOTE:
			As we are restricted to use only 1 if in whole program, todo so we are not 
			able to get the exact required solution for this problem.
	*/
	
	return 0;
}
