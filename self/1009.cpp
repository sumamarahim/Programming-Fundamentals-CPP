#include <iostream>

using namespace std;

int main(){
	// variables practicing

	// Demographic entry
	int age = 19;
	char gender = 'm';
	string name = "David Miller";
	bool edu_status = true;
	float height = 5.7;
	double wieght = 59.69;


	// displaying Demographic info
	cout<<"====== Patient Record ======="<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"gender: "<<gender<<endl;
	cout<<"height: "<<height<<endl;
	cout<<"wieght: "<<wieght<<endl;
	cout<<"edu_status: "<<edu_status<<endl;
	
	

	// check variable size 
	cout<<"\n===== Variable Sizes ======="<<endl;
	cout<<"Size of int: "<<sizeof(int)<<endl;
	cout<<"Size of float: "<<sizeof(float)<<endl;
	cout<<"Size of double: "<<sizeof(double)<<endl;
	cout<<"Size of long double: "<<sizeof(long double)<<endl;
	cout<<"Size of char: "<<sizeof(char)<<endl;
	cout<<"Size of string: "<<sizeof(string)<<endl;
	cout<<"Size of bool: "<<sizeof(bool)<<endl;

	return 0;
}
