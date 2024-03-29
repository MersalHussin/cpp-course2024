#include <iostream>
using namespace std;
int main(){
    

    int sequances [3][5] ={
        {1, 5 ,10 , 16 , 23},
        {2, 4 , 8 , 16 , 32},
        {1,1, 2 ,3, 5}
    };

    int points = 0;
    int answers[3];

    cout << "Type The Missing Number In Sequances";

    cout << "Sequances 1 \n";
    cout << "1 | 5 | 10 | 16 | ?? \n";
    cin >> answers[0];

    
    
    cout << "Sequances 2 \n";
    cout << "1 | 4 | 8 | 16  | ?? \n";
    cin >> answers[1];

    
    cout << "Sequances 3 \n";
    cout << "1 | 1 | 2 | 3  | ?? \n";
    cin >> answers[2];

    
    if (answers[0] == sequances[0][4])
    {
        points++;
    }if (answers[1] == sequances[1][4])
    {
        points++;
    }if (answers[2] == sequances[2][4])
    {
        points++;
    }
    cout << "Your Points Is " << points << " From 3" << "\n";
    
    cout << " These Are The Modle Answers " << "\n";
    cout << "     1 | 5 | 10 | 16 | 23    \n";
    cout << "     1 | 4 | 8 | 16  | 32    \n";
    cout << "     1 | 1 | 2 | 3  | 5      \n";


    return 0;
}