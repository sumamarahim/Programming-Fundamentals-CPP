// lab 4. Write a C++ Program to calculate Average of 5 subjects and find percentage using function.

#include <iostream>
using namespace std;

// prototype of a function that is declared after call, which is needed in that case
float average(float sum);
float percentage(float sum);

int main()
{
	int subjects[5];
	// taking marks of each subjects
	for (int i = 0; i < 5; i++)
	{
		cout<<"Enter marks of Subject: "<<i+1<<endl;
		cin>>subjects[i];
		// validation of entered marks
		if (subjects[i] < 0 || subjects[i] > 120)
		{
			// shows if marks are invalid
			cout<<"Please enter marks between 0 and  120"<<endl;
			// takes marks for invalid enetered mark subject again for correction
			cout<<"Enter marks of Subject: "<<i+1<<endl;
			cin>>subjects[i];
		}
	}
	// calculating total of the given marks for average and percentage
	float sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum = sum + subjects[i];
	}
	
	// displaying average of above marks
	average(sum);
	
	// displaying percentage for the given marks
	percentage(sum);
	
	return 0;
}

// declaring the function for average
float average(float sum)
{
	float avg = sum/5.0;
	cout<<"The average is: "<<avg<<endl;
}

// declaring the function for percentage
float percentage(float sum)
{
	int total_marks = 600;
	float percent = (sum*100)/total_marks;
	cout<<"The percentage is: "<<percent<<endl;
}
