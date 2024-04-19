#include <iostream>
using namespace std;



int add(int num)
{
    if (num == 0)
    {
        return 0;
    }
    
    cout << num <<"\n";
    cout << "=====================" <<"\n";
    return num + add(num - 1);
}

int main(){
    cout << add(7); // 28
    // 7 + add(6)
    // 7 + (6 + add(5) )
    // 7 + (6 + ( 5 + add(4) ) )
    // 7 + (6 + ( 5 + (4 + add(3) ) ) )
    // 7 + (6 + ( 5 + (4 + (3 + add(2) ) ) ) )
    // 7 + (6 + ( 5 + (4 + (3 + (2 + add(1) ) ) ) ) )
    // 7 + (6 + ( 5 + (4 + (3 + (2 + (1 + add(0) ) ) ) ) ) )
    return 0;
}

