#include <iostream>
using namespace std;



void print (int n1 , int n2){
    cout << "The Frist Number Is : " << n1 <<"\n";
    cout << "The Second Number Is : " << n2 <<"\n";
} 
void print (int n1 , int n2, int n3){
    cout << "The Frist Number Is : " << n1 <<"\n";
    cout << "The Second Number Is : " << n2 <<"\n";
    cout << "The Third Number Is : " << n3 <<"\n";
} 
void print (string t1 , string t2){
    cout << "The Frist Text Is : " << t1 <<"\n";
    cout << "The Second Text Is : " << t2 <<"\n";
} 
int main(){
    print(1,2);
    print(1,2,3);
    print("Mersal","Hussin");
    return 0;
}

