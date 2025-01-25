#include <iostream>
using namespace std;
// adding 2 numbers using sum() and pass values to sum() parameters
int sum(int n1, int n2)
{
  int add = n1 + n2;
  return add;
}
int main()
{
  int n1 = 3, n2 = 4;
  cout<<sum(n1, n2);
  
  return 0;
}
