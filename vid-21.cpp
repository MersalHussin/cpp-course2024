#include <iostream>
#include <limits.h>
using namespace std;
int main(){
int age = 300;
    cout << sizeof(age) << "\n"; // 4 Bytes

    short int new_age = 300;
    cout << sizeof(new_age) << "\n"; // 2 Bytes

    short last_age = 300;
    cout << sizeof(last_age) << "\n"; // 2 Bytes

    cout << sizeof(short int) << "\n";
    cout << sizeof(short) << "\n";
    cout << sizeof(long int) << "\n";
    cout << sizeof(long) << "\n";
    cout << sizeof(long long int) << "\n";
    cout << sizeof(long long) << "\n";

    // int num_one = 100;
    // cout << num_one << "\n";

    // signed int num_two = 0;
    // cout << num_two << "\n";

    // unsigned int num_three = 100;
    // cout << num_three << "\n";

    // // unsigned int num_four = -10; // Problem
    // // cout << num_four << "\n";

    // // using bignum = long long int;

    // typedef long long int bignum;

    // bignum my_number = 100010001000;
    // cout << my_number << "\n";

    return 0;
}