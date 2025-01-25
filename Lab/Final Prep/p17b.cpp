#include <iostream>
using namespace std;
// Perform basic Arithmetic Operations using function sharing the same global variables and report the ultimate advantage of using global variables

// global variables
int a = 3, b = 4, sum, multiply;
int add()
{
  sum = a + b;
  return sum;
}

int product()
{
  multiply = a * b;
  return multiply;
}

int main()
{
  cout<<"Sum of "<<a<<" and "<<b<<" is: "<<add()<<endl;
  cout<<"Product of "<<a<<" and "<<b<<" is: "<<product()<<endl;
  
  return 0;
}
