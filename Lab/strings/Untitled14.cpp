#include <iostream>
#include<cstring>
using namespace std;
int main()
{
string s1 = " National";
string s2= " Skills University";
cout <<"string1:"<<s1<<endl;
cout <<"string 2: " <<s2 <<endl;
// cout <<"After concatenation"<<strcat( s1, s2); //an error
/*
 the error that return is;
    we need use c type string

 */

char s11[] = "National";
char s22[] = "Skills University";
cout<<"New strcat(): "<<strcat(s11, s22)<<endl;
return 0;
}
