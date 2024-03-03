#include <iostream>
using namespace std;
int main(){
    //  ==

    cout << (10 == 10) << "\n"; // true => 1
    cout << (20 == 10) << "\n"; // false => 0
    
    // !=

    cout << (10 != 10) << "\n"; // false => 0
    cout << (20 != 10) << "\n"; // true => 1
    
    // >

    cout << (10 > 10) << "\n"; // false => 0
    cout << (20 > 10) << "\n"; // true => 1

    // <

    cout << (10 < 30) << "\n"; // true => 1
    cout << (20 < 10) << "\n"; // false => 0

    // >=

    cout << (10 >= 10) << "\n"; // true => 1

    // <=

    cout << (20 <= 10) << "\n"; // false => 0

    return 0;
}