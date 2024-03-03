#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Choose Day From  1 to 25 \n";
    cin >> day;

    // if ( day == 1)
    // {
    //     cout << "Open From 8 To 14";
    // }
    // else if ( day == 2)
    // {
    //     cout << "Open From 8 To 14";
    // }
    // else if ( day == 3)
    // {
    //     cout << "Open From 10:00 To 16:00";
    // }else{
    //     cout << "We Closed At This day";
    // }

    switch (day)
    {
    case 1:
    case 2:
        cout << "Open From 8 To 14";
        break;
    case 3:
        cout << "Open From 10:00 To 16:00";
        break;

    default:
        cout << "We Closed At This day";
    }
    return 0;
}


