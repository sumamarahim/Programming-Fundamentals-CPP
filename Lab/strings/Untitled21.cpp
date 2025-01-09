#include <iostream>
using namespace std;

int main() {
  string str1 = "Hello ";
  string str2 = "world";

  str1.append(str2); // it appends but with no space

  cout << str1 << endl;
}
