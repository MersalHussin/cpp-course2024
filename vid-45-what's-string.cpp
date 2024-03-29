#include <iostream>
using namespace std;
int main(){
    cout << "I'm Dragon\n";
    char name_a[] = "Mersal"; 

    cout << name_a  << "\n";
    cout << sizeof(name_a)  << "\n"; // 1 * 7
    cout << name_a[0]  << "\n"; // M
    cout << name_a[5]  << "\n"; // L
    // cout << name_a[7]  << "\n";

    char name_b[] = {'M','E','R','S','A','L','\0'};
    cout << sizeof(name_b)  << "\n"; // 1 * 7
    cout << name_b[0]  << "\n"; // M
    cout << name_b[5]  << "\n"; // L

    string name_c = "MERSAL";
    cout << name_c[0] << "\n"; // M
    cout << name_c[5] << "\n"; // L
    return 0;
}