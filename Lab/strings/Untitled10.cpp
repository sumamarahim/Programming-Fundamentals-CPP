// C++ Program to demonstrate use of getline function
#include <iostream>
using namespace std;
 
int main()
{
 
    string s;
    cout << "Enter String" << endl;
    getline(cin, s); // it takes the input of the string and after each space it takes that as well
    cout << "String is: " << s << endl;
    return 0;
}
