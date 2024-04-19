#include <iostream>
using namespace std;
int main(){

    cout << "Hello World";\


    int nums [] = {100 , 200 , 300, 400 , 500 , 600 , 700};

    int numsCount = (sizeof(nums) / sizeof(nums[1])) ;

    int i = 0;
    for(;;){ 
        cout << nums[i] << "\n";
        i++;
        if (i == numsCount )
        {
            break;
        }     
    };

    return 0;
}