#include <iostream>
using namespace std;
// swapping 2 numbers using pointers
int main()
{
  int n1 = 3, n2 = 5, *p1, *p2;
  p1 = &n1, p2 = &n2;
  cout<<"Before Swapping"<<endl;
  cout<<"N1 is: "<<n1<<" at location: "<<p1<<endl<<"N2 is: "<<n2<<" at location: "<<p2<<endl;
  cout<<endl<<"After Swapping"<<endl;
  int n3, *p3; // temporary holder
  p3 = &n3; // temporary holder
  // swapping
  p3 = p2, p2 = p1, p1 = p3;
  cout<<"P1: "<<*p1<<" P2: "<<*p2<<endl;
  
  
  return 0;
}
