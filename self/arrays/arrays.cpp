/**
Chapter 5: Array and Strings

**/

#include <iostream>
using namespace std;

int main() 
{
   
   // Program 1: to print avg and sum of array elements
//  int marks[5] = {1, 2, 3, 4, 5}; //	fixed size array
//	int marks[] = {1, 3, 5, 7, 9};  //	dynamic array
//	//	taking input and storing it in array
//	int marks[10];
//	int total_subjects;
//	
//	cout<<"Enter your total subjects: ";
//	cin>>total_subjects;
	
//	// method 1: 
//	// taking all marks
//	cout<<"enter all subjects marks"<<endl;
//	cin>>marks[0];
//	cin>>marks[1];
//	cin>>marks[2];
//	cin>>marks[3];
//	cin>>marks[4];
//	cin>>marks[5];
//	
//	// displaying marks
//	cout<<"Marks are below"<<endl<<endl;
//	cout<<"=================================="<<endl;
//	cout<<"  Subject\t\tMarks\n=================================="<<endl;
//	for (int i = 0; i < 6; ++i)
//	{
//		cout<<" | subject "<<i+1<<"\t|\t"<<marks[i]<<"\t|"<<endl;
//	}
	
	// ask to enter marks of said subject name
//	//	 method 2: use loop etc
//	int i = 1;
//	for (i; i <= total_subjects; i++)
//	{
//		cout<<"Enter subject "<<i<<" marks out of 100: ";
//		cin>>marks[i];
//	}
	
	
//	int j = 0;
//		
////	cout<<"Detailed Marks are below!\n****************"<<endl;
//	while (j <= 2)
//	{	
//		cout<<marks[i]<<endl;
//		j++;
//	}
	
	
  // cout<<"marks[0] = "<<marks[0]<<endl;
  // cout<<"marks[1] = "<<marks[1]<<endl;
  
  // int sizeOf = sizeof(marks);
  // cout<<sizeOf;
  
  // add all the element in the array
  // avg of all the elements
//  int sum = 0;
//	float avg = 0;
//  
//  for (int i = 0; i <= 5; i++)
//  {
//    cout<<"marks["<<i<<"] = "<<marks[i]<<endl;
//    sum = sum + marks[i];
//  }
//  cout<<"Sum = "<<sum<<endl;
//  cout<<"Avg = "<<sum/4<<endl;
  
  // for (int i = 0; i <= )
  
  
  
//  // program 2: take 10 numbers and print the biggest number in that
//  // try to understand this problem
//  int num[10], k, max;
//  k = 0;
//  
//  cout<<"Enter 10 nums in d/f lines"<<endl;
//  while (k < 10)
//  {
//  	cin>>num[k];
//  	k++;
//  }
//  
//  max = num[0];
//  
//  while (k < 10)
//  {
//  	if (num[k] > max)
//  		max = num[k];
//	cout<<"biggest number is: "<<max;
////  	
////  	k++;
//  }
  


// 	// Problem 3: 
  
  
  
  
//  // taking the number of array element from the user at run time
//  int x;
//  cout<<"how many entries you have? ";
//  cin>>x;
//  int num[x];
//  
//  for (int i = 0; i < x; i++)
//  {
//  	cout<<"enter a number: ";
//  	cin>>num[i];
//  	
//  }
//  
//  for (int j = 0; j < x; j++)
//  {
//  	cout<<"num["<<j<<"] = "<<num[j]<<endl;
//  }
  
  
  
  
  
//********************************************************//
  // 2 DIMENTIONAL ARRAYS
//*******************************************************//
  
//  // initializing 3 by 2 matrix (3 rows and 2 columns)
//  int matrix[3][2] = 
//  {
//  	{1,2},
//  	{4,5},
//  	{7,9}
//  };
//  
//  cout<<matrix[0][1];
  
  
  
//	// taking 3 rows and 4 columns   
//  	int a[3][4] = 
//  	{
//  		{1,2,3,4},
//  		{4,5,6,7},
//  		{8,9,0,1}
//	};
//	
//	// accessing first ROW
//	cout<<a[0][0]<<endl; // 1
//	cout<<a[0][1]<<endl; // 2
//	cout<<a[0][2]<<endl; // 3
//	cout<<a[0][3]<<endl; // 4
//	
//	// accessing second ROW
//	cout<<a[1][0]<<endl; // 4
//	cout<<a[1][1]<<endl; // 5
//	cout<<a[1][2]<<endl; // 6
//	cout<<a[1][3]<<endl; // 7
//	
//	// accessing third and last ROW
//	cout<<a[2][0]<<endl; // 8
//	cout<<a[2][1]<<endl; // 9
//	cout<<a[2][2]<<endl; // 0
//	cout<<a[2][3]<<endl; // 1
  
  
  // Home Work
  // form the following table
  /**
  2 by 4
  1 2 3 4
  5 6 7 8
  **/
  
//  int mat[2][4] = 
//  {
//  	{1,2,3,4},
//  	{5,6,7,8}
//  };
//  
//  for (int i = 0; i < 2; i++) // x-axis OR rows
//  {
//  	for (int j = 0; j < 4; j++) // y-axis OR columns
//  	{
//  		cout<<mat[i][j]<<" ";
//	}
//	cout<<endl;
//  }
  
  
//  // form the following table
//  /**
//  4 by 2
//  1 2 
//  3 4
//  5 6
//  7 8
//  **/
//  
//  int mat2[4][2] = 
//  {
//  	{1,2},
//  	{3,4},
//  	{5,6},
//  	{7,8}
//  };
//  
//  for (int i = 0; i < 4; i++) // rows
//  {
//  	for (int j = 0; j < 2; j++) // columns
//  	{
//  		cout<<mat2[i][j]<<" ";
//	}
//	  cout<<endl;
//  }
  
//  // taking input for 2D arrays using loops and displaying them
//  
//  /*
//  example 1. form the following
//  4 by 3
//  x x x
//  x x x
//  x x x
//  X X X
//  
//  */
//  
//  // array initializing
//  int mat3[4][3];
//  
//  // taking input
//  for (int i = 0; i < 4; i++) // rows
//  {
//  	for (int j = 0; j < 3; j++) // columns
// 	{
//		cout<<"Enter elements one on by: ";
//	  	cin>>mat3[i][j];
// 	}	
//  }
//  
//  cout<<endl;
//  // displaying the above in matrix form
//  
//  for (int i = 0; i < 4; i++)
//  {
//  	for (int j = 0; j < 3; j++)
//  	{
//  		cout<<mat3[i][j]<<"\t";
//	}
//	cout<<endl;
//  }


//	// Data Types for Arrays
//	
//	// int 
//	int data_type_int[3] = {4, 7, 9};
//	
//	// float
//	float data_type_float[3] = {3.1, 5.7, 8.3};
//	
//	// char
//	char data_type_char[3] = {'a', 'b', 'c'};
//	
//	// string
//	string data_type_string[3] = {"Pakistan", "Sweden", "France"};
//	
//	// bool
//	bool data_type_bool[3] = {true,true, false};
//	
//  	cout<<data_type_bool[0];



	// Program 5: 2D int array, 3 rows and 4 columns, data: 30, 20, 55, 206, 78, 81, 25, 90, 3, 48, 67, 104
	// and find sum of all 
	
	int arr[3][4] =
	{
		{
			30, 20, 55, 206	
		},
		{
			78, 81, 25, 90
		},
		{
			3, 48, 67, 104
		}
	};
	
	
	int sum;
  
   return 0;
}
