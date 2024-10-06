#include <iostream>

int main() {
	// alternative to using namespace std;
	int x;
	x = 7;

	std::cout<<"hello world!"<<std::endl;
	std::cout<<"x = "<<x<<std::endl;

	for (int i = 1; i<=4; i++)
		std::cout<<i<<". Pakistan"<<std::endl;

	// expected output 
	/*
		1. Pakistan
		2. Pakistan
		3. Pakistan
		4. Pakistan
	*/
	
	return 0;
}
