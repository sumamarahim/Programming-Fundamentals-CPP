#include <iostream>
using namespace std;
//int input(int roll_number) // pass by value
int input(int *roll_number)
{
  cout<<"Your roll number is: "<<&roll_number<<endl; // location
  cout<<"roll number stored at location: "<<*roll_number<<endl; // value
  
  return 0;
}
/*
void display()
{
  cout<<"Your roll number is: "<<roll_number<<endl;
  cout<<"roll number stored at location: "<<roll_number<<endl;
}
*/

int main()
{
  int roll_num;
  cout<<"Enter your roll number: "<<endl;
  cin>>roll_num;
  input(&roll_num);
  return 0;
}
