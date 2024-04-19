#include <iostream>
using namespace std;

// Declare Function
// طريقة عقيمة يعتبر بعملها بـ إيدي ومش دينامكية
// void calc(int num1 , int num2 , int num3 , int num4){
//     cout << num1 + num2 + num3 + num4 << "\n";
// }


// طريقة جامدة وديناميكية
void calc(int arrayOfNums[], int sizeOfNums){
    int result = 0;
    for(int i = 0 ; i < sizeOfNums; i++ ){
        result += arrayOfNums[i];
    }
    cout << result << "\n";
}
int main(){

    int nums[] = {10 , 20 , 30 ,40};
    int numsSize = size(nums);
// Call Function
    calc(nums , numsSize);
    return 0;
}