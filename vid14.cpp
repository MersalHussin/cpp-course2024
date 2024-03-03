#include <iostream>
using namespace std;

int main(){
    cout<< "============================\n";
    cout<< "== Calculate Your Age App ==\n";
    cout<< "============================\n";
    int age ;
    cin >> age;

    int age_in_days = age *365;
    int age_in_hours = age *365*24;
    int age_in_minuts = age *365*24*60;
    int age_in_seconds = age *365*24*60*60;
    cout << "Your Age With Years is : " << age_in_days << " days\n";
    cout << "Your Age With Hours is : " << age_in_hours << " hours\n";
    cout << "Your Age With Hours is : " << age_in_minuts << " minuts\n";
    cout << "Your Age With Hours is : " << age_in_seconds << " seconds\n";

    return 0;
} 