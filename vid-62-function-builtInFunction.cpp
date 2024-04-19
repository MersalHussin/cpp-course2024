#include <iostream>
#include <cmath>
using namespace std;

/*
    pow
    fmod
    ceil
    floor
    round
    trunc
*/



int main(){
    cout << pow(2, 4) << "\n"; // 16 (2 * 2 * 2 * 2)
    cout << fmod(11.5, 5) << "\n"; // 1.5 (11.5 % 5) 
    cout << ceil(5.1) << "\n"; // 6 => Above Value  
    cout << floor(5.9) << "\n"; // 5 => Under Value  
    cout << round(5.9) << "\n"; // 6 => Above Value (cuase above half)  
    cout << round(5.5) << "\n"; // 6 => Above Value (cuase above half)
    cout << round(5.1) << "\n"; // 5 => Under Value (cuase under half)
    cout << trunc(5.9) << "\n"; // 5 => (بتمسح الكسور)

    return 0;
}
