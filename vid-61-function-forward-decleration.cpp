#include <iostream>
using namespace std;



int calc (int n1 = 1, int n2 = 2);

int main(){
    cout << calc(20 , 10) << "\n";
    return 0;
}

int calc (int n1 , int n2){
    return n1 + n2;
} 