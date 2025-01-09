//if these library are not working then I need download it and import it
#include <ostream>
#include <fstream> // both input and output
//#include <ifstream> // only input
//#include <oftream> // only output

using namespace std;

int main()
{
    fstream myfile;
    myfile.open("test.txt");
    myfile<<"Hello world!"<<endl;
    myfile.close();
}
