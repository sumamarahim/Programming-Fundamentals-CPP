// C++ Program to demonstrate string input using cin
#include <iostream>
using namespace std;
 
int main() {
 	int a;
    string s;
    cout<<"enter value for int var = ";
	cin>>a; 
    cout<<"Enter String"<<endl;
    cin>>s; // it breaks the input of string after a space
   
    cout<<"String is: "<<s<<endl;
    return 0;
}
