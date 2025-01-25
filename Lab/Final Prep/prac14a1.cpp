#include <iostream>
using namespace std;
// taking 3 numbers and printing it using pointers
int main()
{
  int num1, num2, num3;
  
  // taking numbers
  cout<<"Enter 3 numbers"<<endl;
  cin>>num1>>num2>>num3;
  
  // printing numbers using pointers
  int* point1, *point2, *point3; // pointer array decalaration
  point1 = &num1; point2 = &num2; point3 = &num3; // pointer array initializing with nums
  // displaying each number using pointer
  cout<<*point1 
    <<*point2
    <<*point3;
  return 0;
}
