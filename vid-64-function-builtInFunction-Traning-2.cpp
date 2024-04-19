#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // 64 
// min
// max 
// count




    // min

    cout<< min(10,-20) << "\n"; //-20
    cout<< min(10,20) << "\n"; //10
    // array of nums
    cout<< min({10,20,30,40,-10,-20,-30}) << "\n"; //-30


    // max

    cout<< max(10,-20) << "\n"; //10
    cout<< max(10,20) << "\n"; //20
    // array of nums
    cout<< max({10,20,30,40,-10,-20,-30}) << "\n"; //40


// عمل فانكشن أعلى رقم وأقل رقم
    int nums[] = {10,-20,30,-100,100,-10};
    int numSize = size(nums);
    int checkMaxNum = 0;
    int checkMinNum = 0;

    for(int i = 0 ; i< numSize ; i++){
        if (nums[i] < checkMinNum)
        {
            checkMinNum = nums[i];    
        }
        if (nums[i] > checkMaxNum)
        {
            checkMaxNum = nums[i];    
        }
        
    }
    cout << checkMaxNum << "\n";
    cout << checkMinNum << "\n";



    // count
// هعمل فانكشن بتعد الأرقام الي متكررة في الاراي


    int numsTwo [] = {10,20,10,30,-40,10,80,10};
    int numsTwoSize = size(numsTwo);
    int counter = 0;
    int chossenNum = 10;

    for (int i = 0; i < numsTwoSize; i++)
    {
        if(numsTwo[i] == chossenNum){
            counter++;
        }
    }
    cout << chossenNum << " Found " << counter << " Times" << "\n";
}