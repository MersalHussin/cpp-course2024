#include <iostream>
using namespace std;
int main(){

    //  increment

    int likes = 0;
    cout << likes++ << "\n"; // 0 (post increment) 
    cout << likes << "\n"; // 1 

    int views = 0;
    cout << ++views  << "\n" ; // 1 (pre increment) 
    cout << views << "\n"; // 1

    //  decrement
    int comments = 1;
    cout << comments-- << "\n"; // 1 (post decrement) 
    cout << comments << "\n"; // 0 

    int shears = 1;
    cout << --shears  << "\n" ; // 0 (pre decrement) 
    cout << shears << "\n"; // 0

    return 0;
}