#include <iostream>
using namespace std;
int main(){
    double nums[]{100,200,300,400};
    cout << "Frist Elemnt : " << nums[0] << endl;
    cout << "Last Elemnt : " << nums[2] << endl; // Number of elements - 1

    cout << "Locaiton : " << &nums[0] << endl;
    cout << "Locaiton : " << &nums[1] << endl;
    cout << "Locaiton : " << &nums[2] << endl;
    cout << "Locaiton : " << &nums[3] << endl;




    return 0 ;
}