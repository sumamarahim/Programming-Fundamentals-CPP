// Matrix multiplication

#include <iostream>

using namespace std;

int main()
{
	
	// SOLUTION 2.1 matrix of 3 by 3 each 
	
////	// matrix 1, given data
////	int a[2][2] = {
////		
////		{
////			1, 2
////		},
////		{
////			3, 4
////		}
////	};
////	
////	// matrix 2, given data
////	int b[2][2] = {
////		{
////			5, 6
////		},
////		{
////			7, 8
////		},
////		
////	};
	
//	// final matrix, where I need to add and store the final data
//	int result[2][2] = {{0, 0}, {0, 0}};
	int a[3][3] = {
	{
		1,2,3
	},
	{
		4,5,6
	},
	{
		7,8,9
	}
	};
	
	
	
	int b[3][3] = {
	{
		1,2,3
	},
	{
		4,5,6
	},
	{
		7,8,9
	}
	};
	
	int result[3][3] = {{0,0,0}, {0,0,0}, {0,0,0}};
	
	// matrix addition - for loop
	cout<<"Multiplication of the above 2by2 Matrix is"<<endl;
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				result[i][j] = result[i][j] + a[i][k] * b[k][j]; 
			}
		
			cout<<result[i][j]<<"\t";
		}
		cout<<endl; // moving to next line after each row
	}
	
	
	
	// IT IS WORKING AND CHECKED IT
//	// 2 by 2, matrices multiplication
//	int a[2][2] = {
//	{
//		1,2
//	},
//	{
//		4,5
//	}
//	};
//	
//	int b[2][2] = {
//	{
//		1,2
//	},
//	{
//		4,5
//	}
//	};
//	
//	int result[2][2] = {{0,0}, {0,0}};
//	
//	// matrix addition - for loop
//	cout<<"Multiplication of the above 2by2 Matrix is"<<endl;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			for (int k = 0; k < 2; k++)
//			{
//				result[i][j] = result[i][j] + (a[i][k] * b[k][j]); 
//			}
//		
//			cout<<result[i][j]<<"\t";
//		}
//		cout<<endl; // moving to next line after each row
//	}
	
	
	
	
	
	
	
	
	
	
//	// SOLUTION 3: ask for rows and columns
//	
//	// values at run time to store here
//	int a[5][5], b[5][5];
//	int i, j; // variables for loops
//	int r, c; // variables for rows and columns as size of matrix
//
//	// result will be store here
//	int res[5][5];
//	
//	
//	// taking input elements from the user at run time, as we know the size of matrix (2x2)
//	// ask for the matrix size
//	cout<<"\nSize of the matrix"<<endl;
//	cout<<"Enter the rows of the matrix: ";
//	cin>>r;
//	cout<<"Enter the columns of the matrix: ";
//	cin>>c;
//	
//	// taking elements for the first matrix
//	cout<<"\nFirst Matrix"<<endl;
//	for (i = 0; i < r; i++) // takes rows
//	{
//		for (j = 0; j < c; j++) // takes columns
//		{
//			cout<<"Enter element for the marrix ONE: ";
//			cin>>a[i][j];
//		}
//	}
//	
//	// taking elements for the second matrix
//	cout<<"\nSecond Matrix"<<endl;
//	for (i = 0; i < r; i++) // takes rows for the second matrix
//	{
//		for (j = 0; j < c; j++) // takes columns for the second matrix
//		{
//			cout<<"Enter element for the matrix TWO: ";
//			cin>>b[i][j];
//		}
//	}
//	
//	// addition of the matrix
//	cout<<"\nResulted Matrix"<<endl;
//	for (i = 0; i < r; i++) // rows
//	{
//		for (j = 0; j < c; j++) // columns
//		{
//			res[i][j] = a[i][j]+b[i][j] , a[i][j]+b[i][j]; // adding the matrix
//			cout<<res[i][j]<<" "; // showing the result of the matrix
//		}
//		cout<<endl;
//	}
	
	return 0;
}

