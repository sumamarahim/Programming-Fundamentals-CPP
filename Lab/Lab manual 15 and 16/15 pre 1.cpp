#include <iostream>
using namespace std;

// passing arguments
int add(int a, int b)
//int add()
{
//	int a;
//	int b;
//	cout<<"Enter 2 numbers "<<endl;
//	cin>>a>>b;
	
	int sum = a + b;
	cout<<"Total is: "<<sum<<endl;
}

int main()
{
	add(3, 5); // calling a function
	return 0;
}
