#include <iostream>
using namespace std;

// Declare Function
void sayHi(string name , string msg, int age){
    cout << msg  << ", " << name << ".\n";
    cout << name << "\'s " << "age Is: " << age << ".\n";
}

int main(){
// Call Function
    sayHi("Mersal" , "Hai" , 20 );
    sayHi("Mahmoud" , "Hello" , 24 );
    return 0;
}