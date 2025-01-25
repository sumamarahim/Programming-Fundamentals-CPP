#include <iostream>
using namespace std;
// global variables
int a = 3, b = 5;
 
//  call by reference - swapping
void swap(int &x, int &y) // it make changes in locations not in actual values
{
  int z;
  z = x;
  x = y;
  y = z;
}

int main()
{
  int a = 9; // creates new local variable with value of 9
  cout<<"trying to access global variable: "<<::a<<endl; // this will access the global variable
  cout<<"Before Swapping"<<endl
    <<a<<" "<<b<<endl;
  swap(a, b);
  cout<<"After Swapping"<<endl
    <<a<<" "<<b<<endl;
  return 0;
}
