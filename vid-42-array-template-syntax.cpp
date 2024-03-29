#include <iostream>
#include <array>
using namespace std;
int main(){
    array<string , 4> points = {"MErsal","ESDa","dsfsd","sdfsadf"};
    cout << points[0] << "\n";
    cout << points[1] << "\n";
    cout << points[2] << "\n";
    cout << points[3] << "\n";

    cout << points.size() << "\n";

    points.fill("Hello");
    cout << points[3] << "\n";
    cout << points[1] << "\n";
    return 0 ;
}