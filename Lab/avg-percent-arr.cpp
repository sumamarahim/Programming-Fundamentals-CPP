// Date: 12/13/2024
// Lab Excercise # 2:
// Write a C++ program to calculate average and percentage marks of a student.

#include <iostream>
using namespace std;

int main(){
	// array to store the values
	int marks[5]; // size as pe total subjects
	int sum = 0, average = 0;
	string subject[5] = {"Calculus", "ICT", "Programming", "Discrete", "English"}; // subject names
	int i; // variable for the loop 
	
	// taking values in run time
	cout<<"Enter Marks in each subject (out of 25)"<<endl<<endl;
	i = 0;
	while (i <= 4)
	{
		cout<<"Marks in "<<subject[i]<<" is ";
		cin>>marks[i];
		i++;
	}
	
	// printing the total marks and average marks
	cout<<"\nPrinting required information\n"<<endl;
	i = 0;
	while (i <= 4)
	{
		sum += marks[i];
		i++;
	}
	average = sum/5;
	cout<<"Average marks are: "<<average<<endl;
	float percentage = (sum*100)/125;
	cout<<"Percentage is: "<<percentage<<"%"<<endl;
	
	return 0;
}
