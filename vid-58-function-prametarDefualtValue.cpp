#include <iostream>
using namespace std;

// Declare Function
void details(string name = "Mersal" , string msg = "Hi", int age = 20){
    cout << msg  << ", " << name << ".\n";
    cout << name << "\'s " << "age Is: " << age << ".\n";
}

int main(){
// Call Function
    details("Mersal" , "Hai" , 20 );
    details("Mahmoud" , "Hello" );
    details("Mahmoud" );
    details();
    return 0;
}