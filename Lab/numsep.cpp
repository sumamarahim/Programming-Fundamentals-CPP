// Problem: taking 10 numbers from the user at run time and separating the odd from it


#include <iostream>
using namespace std;

int main()
{
    // int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // pre values
    int nums[10]; // to store run time values

    // taking numbers from the user at run time
    cout<<"Enter numbers to separate odd from it"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>nums[i]; // takes value and stores in num at each index
    }

    // separating and printing numbers
    for (int i = 0; i < 10; i++)
    {
        int odd_nums = nums[i] % 2; // checks the odd number and will keep it in odd_num var
        // checking the condition for odd nums
        if (odd_nums == 1)
            cout<<nums[i]<<" "; // printing the odd nums on screen
    }
    return 0;
}
