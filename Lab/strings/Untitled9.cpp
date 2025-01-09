

// C++ Program to demonstrate C-style string declaration
#include <iostream>
using namespace std;
 
int main()
{
 
    // \0 defines the end of the string/char array

    char s1[] = { 'X', 'Y', 'Z', '\0' };
    char s2[4] = { 'X', 'Y', 'Z', '\0' };
    char s3[4] = "XYZ";
    char s4[] = "XYZ";
 
    // prints the s1 array
    cout << "s1 = " << s1 << endl;
    // prints the s2 array as XYZ_ and the last it reserves the space for end of the array
    cout << "s2 = " << s2 << endl;
    // it do's the same as above
    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;
 
    return 0;
}
