// Name: Sumama Rahim
// Reg# F24BSCS-039           
// Department: IET, BS-CS F24 - Morning 
// Date: 12/13/2024

// Lab Manual - Pratical 12 and 13

// Lab Excercise # 3:
// Write a C++ program that two multiply 2x2 Matrices using for Loop.

#include <iostream>
using namespace std;

int main(){
	// array to store the values
	int matrix_A[2][2]; // let declare matrix 1
	int matrix_B[2][2]; // let declare matrix 2
	int i; // variable for the loop 
	
	// taking elements at run time
	
	cout<<"Taking elements for matrix A"<<endl<<endl;
	for (i = 0; i < 2; i++)
	{
		/*
		A
			0,0		0,1
			1,0		1,1
					
		*/
		for (int j = 0; j < 2; j++)
		{
			cout<<"Element : ";
			cin>>matrix_A[i][j]; //
				
			/**
			i = 0, j = 0
			matrix_A[0][0]
			i = 0, j = 1
			matrix_A[0][1]
			
			i = 1, j = 0
			matrix_A[1][0]
			i = 1, j = 1
			matrix_A[1][1]
			*/
		}
	}
	
	
	
	
	
	
	
	cout<<"\n\nTaking elements for matrix B"<<endl<<endl;
	for (i = 0; i < 2; i++)
	{
		/*
		B
			0,0		0,1
			1,0		1,1
					
		*/
		for (int j = 0; j < 2; j++)
		{
			cout<<"Element : ";
			cin>>matrix_B[i][j]; //
				
			/**
			i = 0, j = 0
			matrix_B[0][0]
			i = 0, j = 1
			matrix_B[0][1]
			
			i = 1, j = 0
			matrix_B[1][0]
			i = 1, j = 1
			matrix_B[1][1]
			*/
		}
	}
	
	
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
				
				HOW IT WORKS
				
				STEP 1:
				i = 0, j = 0, k = 0
				AB[0][0] = AB[0][0] + A[0][0]*B[0][0]
				
				i = 0, j = 0, k = 1
				AB[0][0] = AB[0][0] + A[0][1]*B[1][0]
				
				STEP 2:
				i = 0, j = 1, k = 0
				AB[0][1] = AB[0][1] + A[0][0]*B[0][1]
				
				i = 0, j = 1, k = 1
				AB[0][1] = AB[0][1] + A[0][1]*B[1][1]
				
				STEP 3:
				i = 1, j = 0, k = 0
				AB[1][0] = AB[1][0] + A[1][0]*B[0][0]
				
				i = 1, j = 0, k = 1
				AB[1][0] = AB[1][0] + A[1][1]*B[1][0]
				
				STEP 4:
				i = 1, j = 1, K = 0
				AB[1][1] = AB[1][1] + A[1][0]*B[0][1]
				
				i = 1, j = 1, k = 1
				AB[1][1] = AB[1][1] + A[1][1]*B[1][1]
				*/
			}
			
			cout<<matrixAB[i][j]<<"\t"; // displaying matrix multiplication with proper matrix format
		}
		cout<<endl; // transferring to next line after each row
	}
	
	return 0;
}
