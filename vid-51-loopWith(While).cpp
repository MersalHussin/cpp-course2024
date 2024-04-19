#include <iostream>
#include <array>
using namespace std;
int main(){
    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }

    // شبه دي 
    int j = 0;
    for (;;)
    {
        cout << j << "\n";
        if (j == 4)
        {
            break;
        }
        j++;
    }
    
    return 0 ;
}