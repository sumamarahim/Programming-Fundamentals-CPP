// Name: Sumama Rahim
// Reg# F24BSCS-039           
// Department: IET, BS-CS F24 - Morning 
// Date: 12/13/2024

// Lab Manual - Pratical 12 and 13

// Lab Excercise # 4:
// Write a C++ program that two multiply 2x2 Matrices using for Loop.

#include <iostream>
using namespace std;

int main(){
	// array to store the values
	int matrix_A[2][2]; // let declare matrix A
	int matrix_B[2][2]; // let declare matrix B
	int i; // variable for the loop 
	
	// taking elements at run time
	
	// matrix A elements
	cout<<"Taking elements for matrix A"<<endl<<endl;
	for (i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout<<"Element : ";
			cin>>matrix_A[i][j];
		}
	}
	
	// matrix B elements
	cout<<"\n\nTaking elements for matrix B"<<endl<<endl;
	for (i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout<<"Element : ";
			cin>>matrix_B[i][j];
		}
	}
	
	// multiplying matrix A and B and displaying that results
	cout<<"\n\nMultiplying Matrix A and Matrix B"<<endl<<endl;
	for (i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int matrixAB[2][2] = {{0,0}, {0,0}}; // resultant matrix where A.B will be stored
			for (int k = 0; k < 2; k++)
			{
				matrixAB[i][j] = matrixAB[i][j] + matrix_A[i][k]*matrix_B[k][j];
				
				/*
				Required Multiplication 
				
				AxB = 
				|a1b1+a2b3	a1b2+a2b4|
				|					 |
				|a3b1+a4b3	a3b2+a4b4|
				*/
			}
			
			cout<<matrixAB[i][j]<<"\t"; // displaying matrix multiplication with proper matrix format
		}
		cout<<endl; // transferring to next line after each row
	}
	
	return 0;
}
