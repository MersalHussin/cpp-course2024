#include <iostream>
using namespace std;
int main(){
    /* 1
    
    int age = 40;
int points = 800;
float rate = 8.5f;

 if (age > 18 && points > 500 && rate > 5){
    cout << "Yes Age > 18 & Points > 500 & Rate > 5";
 }else{
    cout << false;
 }
// Output Needed If All Conditions Is True
// "Yes Age > 18 & Points > 500 & Rate > 5"
    */


    /*2 

        // Test Case 1
        // int age = 18;
        // int points = 450;

        // Test Case 2
        // int age = 20;
        // int points = 450;

        //  Test Case 3
        int age = 20;
        int points = 650;

    if (age > 18)
    {
    cout << "Age Is Ok \n";
    }else{
        cout << "Age Is Not Ok \n";
    }

    if (points > 500)
    {
    cout << "Points Is Ok \n";
    }else{
        cout << "Points Is Not Ok \n";
    }

*/





    /* 3 
        int num;
        cout << "Please Type A Number Between 0 And 150\n";
        cin >> num;
        if ( num < 10 )
        {
            cout <<"00"<<num;
        }else if (num > 10 && num < 100 ){
            cout << "0" <<  num;
        }else{
            cout << num;
        }


        // If Number Smaller Than 10 "Example 5" Output Will Be => 005
        // If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
        // If Number Larger Than 100 "Example 115" Output Will Be => 115

        */






            /*4

        int num1 = 10;
        int num2 = 10;
        int num3 = 10;
        int num4 = 20;

        // Do Not Edit Any Condition

        // Condition 1
        if (!(num1 > num2))
        cout << "Condition 1 Is True\n";
        else
        cout << "Condition 1 Is False\n";

        // Condition 2
        if (!(num1 > num2) && num1 < num4)
        cout << "Condition 2 Is True\n";
        else
        cout << "Condition 2 Is False\n";

        // Condition 3
        if (!(num1 > num2) && num1 == num3)
        cout << "Condition 3 Is True\n";
        else
        cout << "Condition 3 Is False\n";

        // Condition 4
        if (!(num1 + num2 < num4))
        cout << "Condition 4 Is True\n";
        else
        cout << "Condition 4 Is False\n";

        // Condition 5
        if (!(num1 + num3) < num4)
        cout << "Condition 5 Is True\n";
        else
        cout << "Condition 5 Is False\n";

        // Condition 6
        if (!(num1 + num2 + num3 < num4))
        cout << "Condition 6 Is True\n";
        else
        cout << "Condition 6 Is False\n";

        // Condition 7
        if (num4 - (num1 + num3) + num2 != 21)
        cout << "Condition 7 Is True\n";
        else
        cout << "Condition 7 Is False\n";

        // Output Needed
        // "Condition 1 Is True"
        // "Condition 2 Is True"
        // "Condition 3 Is True"
        // "Condition 4 Is True"
        // "Condition 5 Is True"
        // "Condition 6 Is True"
        // "Condition 7 Is True"
             */



/*5

int by = 82; // by => Birth Year
int s = 500; // s => Salary
if (by > 80)
{
  if (s < 600)
    cout << "Ok\n";
  else
    cout << "High\n";
}
else
{
  cout << "Not Ok\n";
}

cout << (by > 80 ? (s < 600 ? "Ok" : "High") : "Nout OK \n") << " With ternary";
*/


/* 6

int age = 40;
int points = 100;

if (age > 18 && sizeof(age) == 4 && points > 50)
{
  cout << "Age Is Ok\n";
  cout << "Age Data Is 4 Bytes\n";
  cout << "Points Is Ok\n";
}else{
    cout << "You're Not Valid \n";
}

// Output Needed
// "Age Data Is 4 Bytes"
// "Age Is Ok"
// "Points Is Ok"

*/








/* 7

int result = 0;
int num1, num2, num3, num4;
cout << "Please Type 4 Numbers In A Row\n";
cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
cin >> num1 >> num2 >> num3 >> num4;

cout << "Numbers => "<< num1 << " " << num2 << " " << num3 << " " << num4 << endl;


if (num1 % 2 == 0 && num1 < 20)
{
    result += num1;
}
if (num2 % 2 == 0 && num2 < 20)
{
    result += num2;
}
if (num3 % 2 == 0 && num3 < 20)
{
    result += num3;
}
if (num4 % 2 == 0 && num4 < 20)
{
    result += num4;
}

cout << "result => "<< result ;

*/







    /*
        8
        int yaer;
        cout << "Enter The Year: ";
        cin >> yaer;
    switch(yaer){
        case 2004:
            cout <<" My Brithday \n";
            break;
        case 2007:
            cout <<" My Sister Brithday \n";
            break;
        case 2011:
            cout <<" Egypt revolution \n";
            break;
        case 2013:
            cout <<" Egypt revolution 2013 \n";
            break;
        case 2020:
            cout <<" Crona Virus \n";
            break;
        default:
            cout <<"No Important events \n";

        }
    */



    /*  9


            int day;
        cin >> day;

        switch (day)
        {
        case 1:
        case 2:
        case 3:
            cout << "Shop Is Open";
            break;
        case 4:
        case 5:
            cout << "Shop Is Closed";
            break;
        default:
            cout << "Day Is Not Valid";
        }
    */


//  10 


    int num;
    cout << "Enter Num : ";
    cin >> num;


// (IF CONDTION)


//   if (num == 10)
//   {
//     cout << "Case 1";
//   }
//   else if (num > 19 && num < 21)
//   {
//     cout << "Case 2";
//   }
//   else if (num > 29 && num < 33)
//   {
//     cout << "Case 3";
//   }
//   else
//   {
//     cout << "Invalid Number";
//   }


// (SWITCH)

    switch(num){
    case 10:
        cout << " case 1 ";
        break;

    case 20:
        cout << "Case 2";
        break;

    case 30:
    case 31:
    case 32:
        cout << "Case 3";
        break;
    }

    return 0 ;
}