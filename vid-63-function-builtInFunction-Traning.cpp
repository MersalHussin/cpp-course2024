#include <cctype>
#include <iostream>
#include <algorithm>
using namespace std;

    void swapName(string name){

    for (int i = 0; i < size(name); i++)
    {
        if (isupper(name[i]))
        {
        cout << char(tolower(name[i]));
        }else{
        cout << char(toupper(name[i]));
        }
    }
    }
    void removeSpaces(string name){

    for (int i = 0; i < size(name); i++)
    {
        if (isspace(name[i]))
        {
        continue;
        }else{
        cout << name[i];
        }
    }
    }

int main(){

    cout << "======================================" << "\n";
    cout << "vid-63" << "\n";
    cout << "======================================" << "\n";
    cout << "A" << "\n";
    cout << tolower('A') << "\n"; // هترجع معايا الـ ASCII Value 
    cout << char(97) << "\n"; //a 
    cout << char(tolower('A')) << "\n"; //a => عاوز الكاراكتير الي قيمته 97 الي هو حرف الـ ايه سمول

    cout << "==================" << "\n";

    cout << "B" << "\n";
    cout << tolower('B') << "\n"; // هترجع معايا الـ ASCII Value 
    cout << char(98) << "\n"; //a 
    cout << char(tolower('B')) << "\n"; //a => عاوز الكاراكتير الي قيمته 98 الي هو حرف الـ بيه سمول

    cout << "==================" << "\n";

    string nameone = "MerSal";
    int nameoneSize = size(nameone);

//  swapName(nameone); // mERsAL

//  نفس الي بتعمله الفانكشن بس بـ اللوب فقط

    // for (int i = 0; i < nameoneSize; i++)
    // {
    //     if (isupper(nameone[i]))
    //     {
    //     cout << char(tolower(nameone[i]));
    //     }else{
    //     cout << char(toupper(nameone[i]));
    //     }
    // }


    string nameTwo = "M e  r s a l";

    removeSpaces(nameTwo); // Mersal



// swapName(nameone);









    return 0;
}
