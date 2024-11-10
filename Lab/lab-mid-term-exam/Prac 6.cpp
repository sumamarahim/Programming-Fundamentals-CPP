/***
	Name: Sumama Rahim
	Reg# F24BSCS-039
	Programming Fundamentals - Lab Manual
	BS CS F24 Morning Section A
	--------------------------------------
	
	Practical No.6: Escape Sequences, Reserved words and Comments in C++

*/

// Start of Program

#include <iostream>
using namespace std;

int main(){
	/**************************** START OF LAB EXERCISE 1 ********************************/
	/*
		Lab Exercise # 1:
			Write a program to having following given commands. Report the output.
			cout<<” \” COMPUTER SCIENCE \” ”;
			cout<<” COMPUTER\nSCIENCE ”;
			cout<<” COMPUTER\tSCIENCE ”;
			cout<<” COMPUTER\vSCIENCE ”;
			cout<<” COMPUTER\bSCIENCE ”;
			cout<<” COMPUTER\aSCIENCE ”;
			cout<<” COMPUTER\rSCIENCE ”;
			cout<<” \\\ COMPUTER SCIENCE \\\ ”;
			cout<<” COMPUTER SCIENCE \? ”;
			
		Lab Exercise # 2:
			Write a program to display the following output using a single cout statement.
			Subject Marks
			Mathematics 90
			Computer 77
			Chemistry 69

*/
	
//		cout<<" \" COMPUTER SCIENCE \" "<<endl;
//		cout<<" COMPUTER\nSCIENCE "<<endl; // new line
//		cout<<" COMPUTER\tSCIENCE "<<endl; // tab
////		cout<<" COMPUTER\vSCIENCE "<<endl; // 
//		cout<<" COMPUTER\bSCIENCE "<<endl; // backspace
//		cout<<" COMPUTER\aSCIENCE "<<endl; // alert
////		cout<<" COMPUTER\rSCIENCE "<<endl;
//		cout<<" \\\ COMPUTER SCIENCE \\\ "<<endl;
//		cout<<" COMPUTER SCIENCE \? "<<endl;
	/**************************** END OF LAB EXERCISE 1 ********************************/

	
		/**************************** START OF LAB EXERCISE 2 ********************************/
	/*		
		Lab Exercise # 2:
			Write a program to display the following output using a single cout statement.
			
			Subject			Marks
			Mathematics		90
			Computer		77
			Chemistry		69

	*/
	
	cout<<"Subject\t\tMarks\nMathematics\t90\nComputer\t77\nChemistry\t69"<<endl;
	
	/**************************** END OF LAB EXERCISE 2 ********************************/
	
	return 0;
}
