#include <iostream>
using namespace std;
int main(){


//  Serch in 
// 3d Deimantion

    int points__a[3] = {1,2,3}; 
    int points__b[3] = {4,5,6}; 
    int points__c[3] = {7,8,9};

    // int points[num Of Arraies][num of count on array] = {{1,2,3},{4,5,6},{7,8,9}} ;
    int points[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    cout << points[1][2] <<"\n"; //6
    cout << points[2][0] <<"\n"; //7
    cout << points[2][2] <<"\n"; //9
    return 0 ;
}