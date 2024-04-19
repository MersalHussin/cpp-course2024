#include <iostream>
using namespace std;
int main(){
    cout << "=====================================\n";
    int a;
    double b = 20.5;
    a = b ; // Convert b to integer type then assigne with a
    cout << a << "\n"; // 20
    cout << sizeof(a) << "\n"; // 4
    cout << "=====================================\n";


    cout << "=====================================\n";
    char c = 'C';
    int d = 20;


    // cout << int(c); => 67

    cout << c + d << "\n"; // 67 + 20 = 87
    cout << "=====================================\n";


    cout << "=====================================\n";
    int e = 20 ; 
    double f = 20.5;
    cout << e + f << "\n"; // 40.5
    cout << sizeof(e + f) << "\n"; // 8 (double)
    cout << "=====================================\n";


    cout << "=====================================\n";
    int g = 20 ; 
    double h = 20.5;
    cout << g + (int) h << "\n"; // 40
    cout << sizeof(g + (int)h) << "\n"; // 4 (double)
    cout << "=====================================\n";
    return 0;
}
