#include <iostream>
using namespace std;

int main()
{
  // pointers
  
  int age = 19;
  cout<<"Age is: "<<age<<endl;
  cout<<"Age location is: "<<&age<<endl; // prints the age location
  int age2 = 21;
  int* age2_location;
  age2_location = &age2;
  cout<<"Age2 location is; "<<age2_location<<endl;
  cout<<"Age2 accessing from its location, which is: "<<*age2_location<<endl; // it will dereference
  cout<<age2_location<<endl; // location / reference
  cout<<*age2_location<<endl; // value, it dereferences the location
  
  // trying char type pointers
  char gender = 'm';
  char* gender_location;
  gender_location = &gender;
  cout<<gender<<endl; // it prints simple value
  cout<<gender_location<<endl; // it prints the location but it will be hexa and may be similar to the given character in GENDER VARIABLE
  cout<<*gender_location<<endl; // it prints the value at the address
  
  // trying float type pointers
  float height = 5.6;
  float *height_location;
  height_location = &height;
  cout<<height<<endl; // simple height
  cout<<height_location<<endl; // hieght's location
  cout<<*height_location<<endl; // dereferencing again the height's location, it prints the value at that location
  return 0;
}

