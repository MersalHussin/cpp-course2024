#include <iostream>
using namespace std;
int main(){
    
    // // Frist Training ()
    // int result = 0;
    // int nums [] = {10 , 20 , -50 , 13 , 30 , -30 , 40};
    // int numsSize = sizeof(nums) / sizeof(nums[0]); // 7

    // for(int i = 0 ; i < numsSize ; i++){
    //     if (nums[i] > 0 && nums[i] % 2 == 0)
    //     {
    //         result += nums[i];
    //     }
        
    // }
    // cout << "Result Is : " << result;








    // // Second Training (Guess The Number)

    // int guessNumber = 7;
    // int guessTries = 0;
    // cout << "Please Guess Number Between 1 => 10 \n";
    // cout << "You Have 3 Tries\n";

    // int chosse;

    // while(guessTries < 3){
    //  cin >> chosse;
    //     if (chosse == guessNumber)
    //     {
    //         cout << "You Win";
    //         break;
    //     }else{
    //         cout << "False, Try Again \n";
    //         guessTries++;
    //     }
    //     if (guessTries == 3)
    //     {
    //         cout << "You Are Lose The Number Is : " << guessNumber << "\n" ;
    //         break;
    //     }
    // }







    // Third Training (Reversed Element From User)
        int vals [5];
        int inp;
        cout << "Type 5 Numbers To Reverse\n";
        
        for(int i = 4 ; i >= 0 ; i--){
            cin >> inp;
            vals[i] = inp;
        }

    cout << "====================\n";
        
        for(int i = 0 ; i < 5 ; i++){
            cout << vals[i] << "\n";
        }

    return 0;
}