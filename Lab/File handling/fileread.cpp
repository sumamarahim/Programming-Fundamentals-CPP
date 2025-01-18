//if these library are not working then I need download it and import it
#include <iostream>
#include <fstream> // both input and output
//#include <ifstream> // only input
//#include <oftream> // only output

using namespace std;

int main()
{
    // file reading

    string line;
    ifstream myfile("test.txt");
    if (myfile.is_open())
    {
        while (getline(myfile,line))
        {
            cout<<line<<endl;
        }
        myfile.close();
    }


}
