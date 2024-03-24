#include <iostream>
using namespace std;
int main(){

    int nums[4] = {100,200,300,400};
    cout << sizeof(int) << endl; // 4
    cout << sizeof(nums) << endl ; // 16  = 4 * 4


    double randomsNumsWithDouble[3] = {200, 500, 6000};
    cout << sizeof(double) << endl; // 8 
    cout << sizeof(randomsNumsWithDouble) << endl; // 24 = 8 * 3

    int nums2[]{100,300,400}; // هيعرف برضو عدد الأرقام اتوماتيك من غير ما اضيف الرقم وكمان ممكن أشيل علامة اليساوي عادي جدًا
    cout << sizeof(int) << endl; // 4
    cout << sizeof(nums2) << endl ; // 16  = 4 * 4
    return 0;

}