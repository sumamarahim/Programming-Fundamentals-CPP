#include <iostream>
using namespace std;
// multiplication of 2 numbers using pointers
int main()
{
  int n1 = 3, n2 = 5;
  int *p1, *p2;
  p1 = &n1, p2 = &n2;
  cout<<"Num 1: "<<n1<<endl<<"Num 2: "<<n2<<endl;
  cout<<"Location 1: "<<p1<<endl<<"Location 2: "<<p2<<endl;
  // multiplying n1 and n2
  int mul = *p1 * *p2; // multiplies n1 and n2 by pointers
  cout<<"Multiplication is: "<<mul<<endl;
  
  
  return 0;
}
