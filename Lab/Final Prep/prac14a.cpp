#include <iostream>
using namespace std;
// taking 3 numbers and printing it using pointers
int main()
{
  int nums[3];
  // taking numbers
  cout<<"Enter 3 numbers"<<endl;
  for (int i = 0; i < 3; i++)
  {
    cin>>nums[i];
  }
  
  // printing numbers using pointers
  for (int i = 0; i < 3; i++)
  {
    int* point[3]; // pointer array decalaration
    point[i] = &nums[i]; // pointer array initializing with nums
    cout<<nums[i]<<" "; // displaying each index from the nums array with single space
  }
  return 0;
}
