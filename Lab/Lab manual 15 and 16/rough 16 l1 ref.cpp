// this is ok PART 2
#include <iostream>
using namespace std;

// Defining Functions

// function declaration - call by reference
void swap_numbers_by_reference(int& x, int& y) // passed by reference
{
	int z = x;
	x = y;
	y = z;
}

int main()
{
	int a = 3;
	int b = 7;
	cout<<"Before Swapping"<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
	
	// output for call by reference
	
	cout<<"After Swapping - call by reference"<<endl;
	swap_numbers_by_reference(a, b);
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
		
	return 0;
}
