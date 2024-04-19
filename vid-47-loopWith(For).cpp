#include <iostream>
using namespace std;
int main(){

    cout << "Hello World";

    for(int i = 0 ; i < 20 ; i++){
        cout << i << "\n";
    };

    int nums [7] = {100 , 200 , 300, 400 , 500 , 600 , 700};
    // (sizeof(nums) / sizeof(nums[1])) = 7 (to be dynamic)
    for(int i = 0 ; i < (sizeof(nums) / sizeof(nums[1])) ; i++){ 
        cout << nums[i] << "\n";
    };

    return 0;
}