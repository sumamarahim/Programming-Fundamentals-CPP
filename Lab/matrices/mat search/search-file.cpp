#include <iostream> // input and output stream
#include <fstream> // file stream
using namespace std;

int main()
{
  // searching in 2-D array but elements are stored in file
  
  // SOLUTION
  
  // taking elements from the user
  int c[5][5]; // elements will be taken at run time
  int search_num;
  cout<<"Enter elements for 5 by 5 matrix"<<endl;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin>>c[i][j];
    }
  }
  
  // storing elements in elements.txt file
  ofstream elements;
  elements.open("elements.txt");
  if (!elements.is_open())
  {
    cout<<"File not opened properly! ;)"<<endl;
  }
  else
  {
    for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        elements<<c[i][j]<<" ";
      }
      elements<<endl;
    }
  }
  
  // reading that file
  ifstream elements_read;
  elements_read.open("elements.txt");
  if (!elements_read.is_open())
  {
    cout<<"File didn't opened properly, while reading it! ;)"<<endl;
  }
  else
  {
    string line;
    while(getline(elements_read, line))
    {
      cout<<line;
    }
  }
  
  // asking how many elements do you want to search
  int num_ele_to_find;
  cout<<endl<<"How many elements do you want to find?";
  cin>>num_ele_to_find;
  
  // searching for an element in that file
  for (int i = 0; i < num_ele_to_find; i++)
  {
    cout<<"Enter "<<(i+1)<<" element to find: ";
    cin>>search_num;
    for (int j = 0; j < num_ele_to_find; j++)
    {
      if (c[i][j] == search_num)
      {
        cout<<"Element found! :)"<<endl;
      }
    }
  }
  
  return 0;
}
