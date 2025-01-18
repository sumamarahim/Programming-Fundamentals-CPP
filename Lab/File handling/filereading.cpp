#include <fstream> // file stream library
#include <iostream>
using namespace std;

// function declaration

void read_file()
{
    string line;
    ifstream myFile("students.txt"); // selecting file to read
    // checking for existance and opening status
    if (myFile.is_open())
    {
        // reading from file
        while(getline(myFile, line))
        {
            cout<<line<<endl;
        }
        // closing the file
        myFile.close();
    }

}

void write_file()
{
    ofstream myFile; // to write file
    myFile.open("students.txt");
    myFile<<"Name\tRoll Num"<<endl;
    myFile<<"--------------------"<<endl;
    myFile<<"Ali\tF24BSCS1293"<<endl;
    myFile<<"Ahmad\tF24BSCS1213"<<endl;
    myFile.close();


    // writing in file using an array
    void input(); // function declaration
    input(); // function calling

    // reading from this file

    string line;
    ifstream my_File("students2.txt"); // selecting file to read
    // checking for existance and opening status
    if (my_File.is_open())
    {
        // reading from file
        while(getline(my_File, line))
        {
            cout<<line<<endl;
        }
        // closing the file
        my_File.close();
    }
}

// taking input from user
void input()
{
    // taking input as normal input
    string name[3];
    int roll_num[3];
    cout<<"Enter 3 students data"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Name\tRoll Num"<<endl;
        cin>>name[i]>>roll_num[i];
    }

    // it prints data
    ofstream myfile;
    myfile.open("students2.txt");
    myfile<<"-----------------"<<endl;
    myfile<<"Name\tRoll Num"<<endl;
    myfile<<"-----------------"<<endl;
    for (int i = 0; i < 3; i++)
    {
        myfile<<name[i]<<"\t"<<roll_num[i]<<endl;
    }

    myfile.close();
}


// main program
int main()
{
    // // file reading
    // // ifstream myFile("employee.txt");
    // ifstream myFile;
    // char name[20];
    // int salary;
    // string department;
    // myFile.open("employee.txt");
    // // checking if file is opened or not
    // if (!myFile)
    // {
    //     cout<<"File can't open!!!"<<endl;
    //     exit(1);
    // }
    //
    // // reading the complete file word by word and printing on screen
    // while (!myFile.eof())
    // {
    //     myFile>> name >> salary >> department;
    //     cout<<name<<"\t"<<salary<<"\t"<<department<<endl;
    // }
    //
    // myFile.close();

    // string line;
    // ifstream myFile("employee.txt");
    // // checking the file existance
    // if (myFile.is_open())
    // {
    //     // getting data from file
    //     while(getline(myFile,line))
    //     {
    //         cout<<line<<endl;
    //     }
    //     myFile.close(); // closing the file
    // }


    // W.A.P to ask want to read or write a file, and do action as per answer
    char option;
    cout<<"Enter your option: R/W (read or write) ";
    cin>>option;
    switch (option)
    {
        case 'r':
            read_file();
            break;
        case 'w':
            write_file();
            break;
        default:
            cout<<"Wrong selection, use only R or W!"<<endl;
    }

    return 0;
}
