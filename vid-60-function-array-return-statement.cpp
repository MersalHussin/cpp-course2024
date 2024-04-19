#include <iostream>
using namespace std;

// دالة فارغة بتطبع بس
// void calc(int n1, int n2){
//     cout << n1 + n2 << "\n";
// }

int calc (int n1 = 1, int n2 = 4){
    cout << "Operation is Done." << "\n";
    return n1 + n2;
    cout << n1 + n2 << "\n"; // Not print cuase it become After return statement
} 
int main(){
    
    int result = calc(10 , 20);
    int result2 = calc(10 , 30);
    cout << "The result calcFunction Retern is : " << result << endl;
    cout << "When i multiable the result * 5 give me : " <<  result * 5 << endl ;

    return 0;
}