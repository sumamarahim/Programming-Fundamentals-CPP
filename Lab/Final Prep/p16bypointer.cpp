#include <iostream>
using namespace std;
//  passing by pointers
void swap(int *x, int *y)
{
  int *z;
  z = x;
  x = y;
  y = z;
  cout<<"After swapping"<<endl;
  cout<<*x<<" "<<*z<<endl;
  cout<<"LOCATIONS: "<<x<<" and "<<y<<endl;
}

int main()
{
  int a = 3, b = 5, *p1, *p2;
  p1 = &a, p2 = &b;
  // before swapping
  cout<<"before swapping"<<endl;
  cout<<"LOCATIONS: "<<p1<<" and "<<p2<<endl
    <<a<<" "<<b<<endl;
  swap(p1, p2);
  
  return 0;
}
