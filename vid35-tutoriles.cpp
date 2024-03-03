#include <iostream>
using namespace std;
int main(){
    /* App 1
    int num;
    cout << "Enter The Num : ";
    cin >> num;
    if(num%2 > 0 ){
        cout << "Your Number Is Even";
    }else{
        cout << "Your Number Is Odd";
    }
*/

    /* App 2
    int a,b,c;
    cout << "Enter Your Numbers";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
    cout << "The Greatest Num Is : " << a; 
    }else if (b > c && b > a){
    cout << "The Greatest Num Is : " << b; 
    }else{
    cout << "The Greatest Num Is : " << c; 
    }
    */

   /* App 3 => User points Cheaker
   int points;
   cout << "Enter Your Points : ";
   cin >> points;

   if (points <= 500 && points > 0 ){
    cout << "Not Bad";
   }else if (points > 500 && points <= 1000){
    cout << "Good";
   }else if (points > 1000)
   {
    cout << "Awosome";
   }else{
    cout << "Very Bad";
   }
*/

    // App 4 => Simple Calculator
    int num1,num2,op;
    cout << "Enter Frist Num : ";
    cin >> num1;
    cout << "Enter Second Num : ";
    cin >> num2;
    cout << "Enter The Operation : \n";
    cout << "[1] => + \n";
    cout << "[2] => - \n";
    cout << "[3] => * \n";
    cout << "[4] => / \n";
    cin >> op;

    if (op == 1)
    {
        cout << num1 + num2;
    }else if (op == 2)
    {
        cout << num1 - num2;
    }else if(op == 3){
        cout << num1 * num2;
    }else if(op == 4){
        cout << num1 / num2;
    }else{
        cout << "Please Re Run This Code Beacuse You Chosse False Value";
    }
    
    
    return 0;
}