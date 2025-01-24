#include <iostream>
using namespace std;
int main()
{
// deleting an element from an array
int arr[5] = {1, 2, 4, 5, 6};
for (int i = 0; i < 5; i++)
{
  if (arr[i] == 4)
  continue; // which skips number 4
  cout<<arr[i]<<" ";
}

return 0;
}
