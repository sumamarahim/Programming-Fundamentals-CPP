// Code editor used: Linux Terminal
// date: 01022024

#include <iostream>
using namespace std;

int main()
{
cout<<"Strings"<<endl;
string name = "Some One";
string city = "Beu Monde";

// strings concatinating
// adding string with string

cout<<"Hello! I am "+ name +" from "+ city +"."<<endl;

string f_name = "Some";
string l_name = "One";
string fullName = f_name + l_name; // string concatination

cout<<"FullName is: "<<fullName<<endl;

cout<<"2 names with entering space in b/w: "<<f_name +" "+ l_name<<endl;


int age = 17;

// adding string and int
// cout<<"String + int: "<<age+name<<endl;  // it returns error, int and string can't be add

// append()
string full_name = f_name.append(l_name); // it append the l_name with f_name cout<<"The full name is: "<<full_name<<endl;


// accessing strings with array
cout<<"Name's 4th element by array: "<<name[3]<<endl;

// printing string using array loop to get all elements
int i = 0;
do
{
cout<<name[i]; // it prints the whole string - as array
i++;
}
while (i < name.length()); // it returns the length of name string as array cout<<endl;
// cout<<name.length()<<endl; // it returns the length of name array

// taking string as an input from the users limitation
// taking strings as input using cin>> is: when space occurs then it
// will not take that part after first space
string new_name;
cout<<"\nEnter your name: ";
// cin>>new_name;


// cout<<"Welcome "+new_name+" to this programming world!"<<endl;

// alternative for this issue is using getline();
getline(cin, new_name);
cout<<"input took with getline(); : "<<new_name<<endl;
// let's findout the length of new_name string
cout<<"Lenght of new_name string is: "<<new_name.length()<<endl;

// let's findout the size of new_name string variable
cout<<"Size of new_name string is: "<<new_name.size()<<endl;

// Home Task/Assignment
// length of string without built-in plugin



// regular string variable
string regular_var = "This is regurlar variable";
cout<<regular_var<<endl;

// c styled string variable
char c_styled_var[56] = "This is C Style variable";
cout<<c_styled_var[56]<<endl;

return 0;
}
