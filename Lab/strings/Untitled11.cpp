// C++ Program to print string using function
#include <iostream>
using namespace std;
 // pass by value
void print_string(string new_string)
{
    cout << "Passed String is: " << new_string << endl;
    return;
}
int main()
{
 
    string s = "Hello CS";
    print_string(s);
 
    return 0;
}
