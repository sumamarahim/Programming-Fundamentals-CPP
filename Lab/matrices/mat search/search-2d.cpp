#include <iostream> // input and output stream
#include <fstream> // file stream
using namespace std;

int main()
{
  int search_num;
  // searching in 2-D array
  int b[5][5] = { {1, 2, 3, 4, 5}, {11, 12, 13, 14, 15}};
  int i = 0;
  while (i < 5)
  {
    int j = 0;
    while (j < 5)
    {
      if (search_num == b[i][j])
      {
        cout<<"Required element found! :)"<<endl;
      }
      j++;
    }
    i++;
  }
  
  return 0;
}
