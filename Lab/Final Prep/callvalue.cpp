#include <iostream>
using namespace std;

int new_age(int age_new)
{
  age_new = age_new + 8;
  cout<<"New age: "<<age_new<<endl;
  return 0;
}

int main()
{
  int age = 9;
  cout<<"Age is: "<<age<<endl;
  new_age(age);
  return 0;
}
