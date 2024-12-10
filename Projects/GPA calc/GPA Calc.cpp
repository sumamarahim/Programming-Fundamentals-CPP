/**

A student’s cumulative grade point average (CGPA) can be determined using the C++ program 
CGPA Calculator. The user’s input is used to compute the CGPA, which includes information 
like the number of courses taken and the grades earned in each one. The program also shows
 each student’s overall course grade. CGPA Calculator calculates a student’s Cumulative Grade 
 Point Average (CGPA) from the given exam results. The program can show the individual grades
  of each course, calculate total credits and total grade points achieved, determine the GPA
   for the semester,
 and based on all the data, it can generate and present the CGPA of the student. 
 
Technologies Required: 
C++ programming language, Data Structures, Basic Searching & 
Sorting algorithms, Basic Arithmetic Operations and formulas, and File Handling ( I/O Streams ).

**/


/**
EXPECTED OUTPUT
***************

Enter number of students: ____
Reg# F24BSCS001 (it will be auto and incremented by 1 until the num of students reaches)
Name: _____
Grades (A,B,C,D or F)
Calculus: __
ICT: ___
PF: __
Eng: __
Discrete: __

**/



#include <iostream>

using namespace std;


// PF GPA calc function - multiple students
int programming_fundamentals(){
		// variables
		string student_name[5];
		int pf_ch = 3;
		
		// taking input name and grade
		char pf_grade[5]; // grades are A, B, C, D or F
		for (int i = 0; i<= 4; i++)
		{
			cout<<"Name: ";
			cin>>student_name[i];
			cout<<"Grade: ";
			cin>>pf_grade[i];
		}
		
		// displaying the result of each student
		cout<<"\nStudent Name\tpf_grade\tGPA"<<endl;
		for (int j = 0; j <= 4; j++)
		{
			
			// grading point against grade
			// alternative for if-else-if is switch statement
			if (pf_grade[j] == 'A')
			{
				int pf_gpa = (4*3)/3;
				cout<<student_name[j]<<"\t\t"<<pf_grade[j]<<"\t\t"<<pf_gpa<<endl;
			}
			
			else if (pf_grade[j] == 'B')
			{
				int pf_gpa = (3*3)/3;
				cout<<student_name[j]<<"\t\t"<<pf_grade[j]<<"\t\t"<<pf_gpa<<endl;
			}
			
			else if (pf_grade[j] == 'C')
			{
				int pf_gpa = (2*3)/3;
				cout<<student_name[j]<<"\t\t"<<pf_grade[j]<<"\t\t"<<pf_gpa<<endl;
			}
			
			
			else if (pf_grade[j] == 'D')
			{
				int pf_gpa = (1*3)/3;
				cout<<student_name[j]<<"\t\t"<<pf_grade[j]<<"\t\t"<<pf_gpa<<endl;
			}
			
			
			else if (pf_grade[j] == 'F')
			{
				int pf_gpa = (0*3)/3;
				cout<<student_name[j]<<"\t\t"<<pf_grade[j]<<"\t\t"<<pf_gpa<<endl;
			}
		}
		
		
		return 0;
}

int main(){
	
	cout<<endl<<"**** Programming Fundamentals ****";
	cout<<programming_fundamentals()<<endl;
	
	
	return 0;
}
