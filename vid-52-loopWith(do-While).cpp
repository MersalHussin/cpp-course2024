#include <iostream>
using namespace std;
int main(){

//  do بتطبع أول مرة الحاجة علطول حتى لو محققتش الشرط وتكمل لو الشرط اتحقق
    int index = 7;

    do{
        cout << index << "\n";
        index ++;
    }while (index < 6);

cout << "=================="  << "\n";


//  while بتطبع لما الشرط يتحقق بس

    int inbex = 0;
    while (inbex < 6)
    {
        cout << inbex << "\n";
        inbex++;
    }
    
    
    return 0;
}