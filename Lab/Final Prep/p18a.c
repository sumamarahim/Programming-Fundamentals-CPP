#include <iostream>
#include <string>
using namespace std;
// converting - lower, upper, and title case - strings

int main()
{
  string name = "mohammad ali";
  cout<<name<<endl;
  
  // to check length of a string
  cout<<name.length()<<endl;
  
  // accessing individual chars by using c-type string
  char ch = name[6]; // it stores the 6th index of name var in ch as single char
  name[1] = 'u'; // it corrects the Muhammad name's o to u
  cout<<name<<endl;
  cout<<ch<<endl;
  
  string str1 = "Sami";
  string str2 = "Muhammad";
  //string str3 = str2.append(str1); // append MuhammadSami
  //cout<<str3<<endl;
  string str3 = str2 + " " + str1;
  cout<<str3<<endl;
  return 0;
}
