// this is ok PART 1
#include <iostream>
using namespace std;

// Defining Functions

// function declaration - pass by pointers
void swap_numbers_by_pointers(int* x, int* y) // pass by pointers
{
	int z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int a = 3;
	int b = 7;
	cout<<"Before Swapping"<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
	
	// output for pass by pointers
	
	cout<<"After Swapping - pass by pointers"<<endl;
	swap_numbers_by_pointers(&a, &b);
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;

	return 0;
}
