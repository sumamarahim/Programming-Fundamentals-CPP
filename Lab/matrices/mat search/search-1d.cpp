#include <iostream> // input and output stream
#include <fstream> // file stream
using namespace std;

int main()
{
  // searching element in 1-D array;
  int a[5] = {1, 2, 3, 7, 5};
  int search_num; // to store element, you want to search
  cout<<"What num do you want to search?"<<endl;
  cin>>search_num;
  for (int i = 0; i < 5; i++)
  {
    if (search_num == a[i])
    {
      cout<<search_num<<" found in array"<<endl;
    }
  }
  
  return 0;
}
