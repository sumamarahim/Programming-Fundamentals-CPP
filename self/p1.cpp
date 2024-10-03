// test example prgram in which simple operations are performed including cout, var etc 

#include <iostream>

using namespace std;

int main() {
	cout<<"Hello World!";

	int x;
	x = 9;
	cout<<endl<<x<<endl;
	// std::<<"alternative to \'using namespace std\'"<<std::endl;
	// return 0; // 0 is standerd but can be used any other int value

	// chaining 
	cout<<"hello world"<<endl<<"it\'s me \n"<<"and x value is "<<x<<endl;	
	
	cout<<"this will not be printed on screen! because it is appeared after \'RETURN 0\'";
}
