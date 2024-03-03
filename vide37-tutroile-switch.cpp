#include <iostream>
using namespace std;
int main()
{
    /* award num => app 1
    int num;
    cout <<"Type The Num You Award \n";
    cin >> num;

    switch(num){
        case 100:
        case 110:
        case 120:
            cout << "You won Iphone";
        break;
        case 130:
        case 140:
        case 150:
            cout << "You won Laptop";
        break;
        case 160:
        case 170:
        case 180:
            cout << "You won Girl";

        default :
            cout << "You won Computer";
    }
*/

    /* discount app  => app 2
    int price = 100;
    int discount = 10;
    int years ;
    cout << "Write Your Year: ";
    cin >> years;

    switch(years){
        case 1:
            discount = 20;
            break;
        case 2:
            discount = 40;
            break;
        case 3:
            discount = 60;
            break;
    }

    cout << "Your product price is: " << price - discount << " Because You have " << discount<<"% " << "discount";
    */

    // calc app  => app 3
    int n1, n2, op;
    cout << "Type The Frist Num\n";
    cin >> n1;
    cout << "Type The Second Num\n";
    cin >> n2;
    cout << "Type The Oprator\n";
    cout << "[1] => + \n";
    cout << "[2] => - \n";
    cout << "[3] => * \n";
    cout << "[4] => / \n";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << n1 << " + " << n2 << " = " << n1 + n2;
        break;
    case 2:
        cout << n1 << " - " << n2 << " = " << n1 - n2;
        break;
    case 3:
        cout << n1 << " * " << n2 << " = " << n1 * n2;
        break;
    case 4:
        cout << n1 << " / " << n2 << " = " << n1 / n2;
        break;
    default:
        cout << "Operation is not valid";
    }
    return 0;
}