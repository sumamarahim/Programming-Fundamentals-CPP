#include <iostream>
using namespace std;

// functions

int display(int *r_num, int *marks, int age, string name, char grade, float cgpa)
{
  // Student's Detail
  cout<<"*** Your detail ***"<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<endl;
  cout<<"Roll Num: "<<endl;
  cout<<"Grade: "<<endl;
  cout<<"Total Marks: "<<endl;
  cout<<"CGPA: "<<endl;
}

int input(*roll_num, *total_marks, age, name, grade, cgpa)
{
  int roll_num, total_marks, age;
  string name;
  char grade;
  float cgpa;
  
  cout<<"Enter your roll num: "<<endl;
  cin>>roll_num;
  cout<<"Enter total marks: "<<endl;
  cin>>total_marks;
  cout<<"Enter your age: "<<endl;
  cin>>age;
  cout<<"Enter your name: "<<endl;
  cin>>name;
  cout<<"Enter your grade: "<<endl;
  cin>>grade;
  cout<<"Enter your CGPA: "<<endl;
  cin>>cgpa;
}

int main()
{
  input();
  cout<<endl;
  display();
  
  return 0;
}
