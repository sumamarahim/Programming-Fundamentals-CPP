// #include <ifstream> // reading file
// #include <oftream> // writing into file
#include <fstream> // reading and writing

using namespace std;

int main()
{
    string name = "Abdullah";
    int age = 21;
    float height = 5.6;
    // list of students
    string students[] = {"Sameer", "Ahmad", "Talha", "Ali"};

    // opening a file
    ofstream myFile;
    myFile.open("test.txt");
    // myFile<<"This is test writing into txt file"<<endl;
    // adding new line
    // myFile<<"New line added "<<endl; // this will overwrite the first line
    // trying to keep the old record and write in new line
    // myFile<<"Keeping last lines \n"<<endl;
    // Student Record
    myFile<<"Student Name: "<<name<<"\n";
    myFile<<"Age: "<<age<<endl;

    // reading names from array
    for (int i = 0; i < 4 ; i++)
    {
        myFile<<"Student "<<i+1<<" "<<students[i]<<endl;
    }

    myFile.close();

    return 0;
}
