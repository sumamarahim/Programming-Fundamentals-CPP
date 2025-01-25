#include <iostream>
using namespace std;
// create Add() and Sum(), access Add()'s var in Sum() and Main() and report the behavior
int Add()
{
  cout<<"Add"<<endl;
  int a = 3, b = 7;
  return 0;
}

int Sum()
{
  cout<<"Sum"<<endl;
  cout<<a<<" "<<b<<endl;
  return 0;
}

int main()
{
  cout<<a<<" "<<b<<endl;
  return 0;
}
