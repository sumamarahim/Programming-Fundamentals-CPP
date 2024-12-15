// Name: Sumama Rahim
// Reg# F24BSCS-039           
// Department: IET, BS-CS F24 - Morning 


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
	
	// taking values in run time
	cout<<"Taking elements for matrix A"<<endl<<endl;
	for (i = 0; i < 2; i++)
	{
		/*
		A
			0,0		0,1
			1,0		1,1
					
		*/
		int ii = 1;
//		cout<<"Enter row "<<i+1<<" elements "<<endl;
		for (int j = 0; j < 2; j++)
		{
			int element_number = 0;
			element_number = element_number + (i);
			cout<<"Element "<<element_number;
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
			
			i = 0+1, j = 0+1;
			n = i + j; 1+1, 
			n = n+(i+1)
			n = 0 + 1
			n = 1 + 2;
			
			*/
		}
	}
	
//	// finding the largest element
//	i = 0;
//	int large_number = number[0]; // let suppose, largest element is in index 0
//	while (i <= 4)
//	{
//		
//		if (number[i] > large_number)
//		{
//			large_number = number[i];
//		}
//		i++;
//	}
//	// printing the largest number
//	cout<<large_number<<" is larget number"<<endl;
//	
	
	return 0;
}
