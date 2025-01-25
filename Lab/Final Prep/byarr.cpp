#include <iostream>
using namespace std;
//  passing arrays through function
void numFunc(int arr[5])
{
  for (int i = 0; i < 5; i++)
  {
    // deleting an element from the list - suppose on index 1 to be deleted
    int del = arr[1];
    if (arr[i] == del)
    {	
      continue;
    }
    cout<<"Num "<<i+1<<" is "<<arr[i]<<endl;
  }
}
int main()
{
  int nums[5] = {10, 20, 30, 40, 50};
  numFunc(nums);

  return 0;
}
