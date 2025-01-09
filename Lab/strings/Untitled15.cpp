#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[10] = "hello";
    char s2[7] = "world";
    strcpy (s1, s2); // it copies the second one in first

    cout<<"after string copy value of s1 = ";
    cout << s1 << endl;
    cout<<"after string copy value of s2 = ";
    cout << s2 << endl;
    strcpy (s2, s1);
    cout<<"New copy: "<<s1<<endl<<s2<<endl;
}
