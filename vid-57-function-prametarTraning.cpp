#include <iostream>
using namespace std;

// Declare Function
void iceBox(string item){
    if (item == "Sina Cola")
    {
        cout << item << " Will Be More Cold\n";
    }else if (item == "Apple"){
        cout << item << " Will Be More Fresh\n";
    }else if (item == "Juice"){
        cout << item << " Will Be More Good\n";
    }else{
        cout << item << " Is invaild\n";
    }
    
}

void calc(int numOne , int numTwo , string opr){
    if (opr == "+"){
        cout << numOne << "+" << numTwo << " = " << numOne + numTwo << "\n";
    }else if(opr == "-"){
        cout << numOne << "-" << numTwo << " = " << numOne - numTwo << "\n";
    }else if(opr == "*"){
        cout << numOne << "*" << numTwo << " = " << numOne * numTwo << "\n";
    }else if(opr == "/"){
        cout << numOne << "/" << numTwo << " = " << numOne / numTwo << "\n";
    }else{
        cout << "Please Text The Correct opertion"<< "\n";
    }
    
}

int main(){
// Call iceBox Function
    iceBox("Sina Cola");
    iceBox("Apple");
    iceBox("Juice");
    iceBox("Tv");

// Call calc Function
    calc(10 , 20 , "+");
    calc(10 , 20 , "-");
    calc(10 , 20 , "*");
    calc(10 , 20 , "/");
    calc(10 , 20 , "a");
    return 0;
}