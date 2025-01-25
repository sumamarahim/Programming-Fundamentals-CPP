#include <iostream>
using namespace std;
//  pass by reference - swapping two numbers
void swap(int &a, int &b) // it takes the references/addresses so it swaps the addresses not the actual values
{
  int temp;
  temp = b;
  b = a;
  a = temp;
}
int main()
{
  int n1 = 3, n2 = 4;
  
  cout<<"Before Swapping"<<endl;
  cout<<"n1: "<<n1<<endl
    <<"n2: "<<n2<<endl;
    
  // swapping
  swap(n1, n2); // this function takes the references so it swaps the memory addresses not actual values
  cout<<"After Swapping"<<endl;
  cout<<"n1: "<<n1<<endl
    <<"n2: "<<n2<<endl;
  
  return 0;
}
