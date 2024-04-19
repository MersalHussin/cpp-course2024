#include <iostream>
using namespace std;
int main (){
    int nums [] = {100 , 200 , 300 , 400 , 500 , 600};
    int numsSize = sizeof(nums) / sizeof(nums[0]);


    // Method 1 (increment)
    // for (int i = 0 ; i < numsSize ; i+= 2)
    // {
    //     cout << nums[i] << "\n";
    // }

    // Method 2 (increment)
    // for (int i = 0 ; i < numsSize ; i++)
    // {
    //     cout << nums[i] << "\n";
    //     i++;
    // }  

    // Method 3 (decrement)
    // for (int i = (numsSize - 1) ; i > 1 ; i--)
    // {
    //     cout << nums[i] << "\n";
    // }  
    
    // Method 4 (decrement with advanced for)
    int i = (numsSize - 1);
    for (;;)
    {
        cout << nums[i] << "\n";
        i--;
        if (i == 1 ){
            break;
        };
    }  
    return 0;
}