#include <iostream>
using namespace std;
int main(){
    /*1

        // for
    cout << "For" << endl;
    for (int i = 0; i < 11 ; i++)
    {
        cout << i << "\n";
    }

        // while

    int i = 0;

    // cout << "While" << endl;
    
    // while(i < 11){
    //     cout << i << "\n";
    //     i++;
    // }

        // do while

    cout << "do While" << endl;
    do{
        cout << i << "\n";
        i++;
    }while(i < 11);
    */







    /* 2

    int index = 2;
    for (;;) 
    {
    cout << index << "\n"; // From 2 To 10
    if (index == 8)
    {
        break;
    }
    index++;
    }
    */







    /* 3 (Advanced)

    int inp1;
    int inp2;
    int replace;

    cout << "Write The Frist Num : ";
    cin >> inp1;
    cout << "Write The Second Num : ";
    cin >> inp2;

    if (inp1 > inp2)
    {
        replace = inp2;
        inp2 = inp1;
        inp1 = replace;
    }
    
    for (int i = inp1; i < inp2; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << (i < (inp2 - 1 ) ? ", " : " ");
        }
        
    }

    */




    /* 4

        //for
        cout << "For" << endl;
    for (int i = 0; i < 19; i+=2)
    {
        cout << i << "\n";
    }
        //while
        cout << "While" << endl;
    int i = 0;
    while (i < 19)
    {
        cout << i << "\n";
        i+= 2;
    }
    
    */
    



    /* 5
            //for
        cout << "For" << endl;
    for (int i = 0; i < 28; i+=3)
    {
        cout << i << "\n";
    }
        //while
        cout << "While" << endl;
    int i = 0;
    while (i < 28)
    {
        cout << i << "\n";
        i+= 3;
    }
    */




    /*    6
        int number = 10;

        //  //for
            cout << "For" << endl;

        for (int i = 0; i < 4; i++)
        {
            cout << number << "\n";
            number = number * number;
        }
        


        int number2 = 10;

            //while
        cout << "While" << endl;
        int i = 0;
        while (i < 4)
        {
            cout << number2 << "\n";
            number2 = number2 * number2;
            i++;
        }
    */





    /* 7

        // for
    int num = 2;

        cout << "For" << endl;

        for (int i = 0; i < 7; i++)
        {
            cout << num << "\n";
            num = num + num ;
        };




        // While
    int num2 = 2;

        cout << "While" << endl;

        int i = 0;
        while (i < 7)
        {
            cout << num2 << "\n";
            num2 = num2 + num2;
            i++;    
        }
    */






    /* 8

        // for
    int num = 2;

    cout << "For" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << num << "\n";
        num = num + 1 ;
        num = num + num;
    };


        // while
    int num2 = 2;

    cout << "while" << endl;

    int i = 0 ;

    while(i < 6){
        cout << num2 << "\n";
        num2 = num2 + 1 ;
        num2 = num2 + num2;
        i++;
    }
    */






    /* 9

    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

            // for

    cout << "===============" << endl;
    cout << "for" << endl;
    cout << "===============" << endl;

    for (int i = 1; i < 3; i++)
    {
        cout << friends[i] << "\n";
    }

    int i = 1;

            // while

    cout << "===============" << endl;
    cout << "while" << endl;
    cout << "===============" << endl;

    while(i < 3){
        cout << friends[i] << "\n";
        i++;
    }
    */







    /* 10

    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};


    cout << "===============" << endl;
    cout << "for" << endl;
    cout << "===============" << endl;

        for (int i = 0; i < size(friends); i++)
    {
        if(friends[i][0] == 'A')
        {
        cout << friends[i] << "\n";
        }
    }

    cout << "===============" << endl;
    cout << "while" << endl;
    cout << "===============" << endl;

    int i = 0;
    while(i < size(friends)){
        if(friends[i][0] == 'A')
        {
        cout << friends[i] << "\n";
        }
        i++;
    }
    */







   /* 11
   string friends[] = {"Ahmed", "Osama", "Ameer" , "Mersal"};

            //    for
        // cout << "for \n";
        // for (int i = 0; i < size(friends); i++)
        // {
        //     cout << "\n==========\n";
        //     cout << "= " << friends[i] <<  " =" << "\n";
        //     cout << "====================\n";
        //     cout << "== " ;
        //     for (int j = 0; j < size(friends[i]); j++)
        //     {
        //         // if (j < size(friends[i])-1)
        //         // {
        //         //     cout << friends[i][j] <<  ", ";
        //         // }else{
        //         //     cout << friends[i][j] <<  " ";
        //         // }

        //     cout << friends[i][j] << (j < (size(friends[i])-1) ? ", " : "") ; 
        //     }
        //     cout << " ==\n";
        //     cout << "====================\n";
            
        // }

            //    while

        cout << "while \n";
        int i = 0;
        while(i < size(friends)){
        cout << "\n==========\n";
        cout << "= " << friends[i] <<  " =" << "\n";
        cout << "====================\n";
        cout << "== " ;

            int j  = 0;
            while(j < size(friends[i])){
                cout << friends[i][j] << (j < (size(friends[i])-1) ? ", " : "") ; 
                j++;
            }
            
        cout << " ==\n";
        cout << "====================\n";
        i++;
        }

    */








   /* 12
    int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};

    int nexNum = 1;
   for(int i = 0 ; i < size(nums); i++){
        if (nums[i] + nums[i] == nums[nexNum])
        {
            cout << nums[i] << "\n";
        }
        nexNum++;
   }
    */








    /* 13
    for (int i = 30; i > 2; i-= 3)
    {
        cout << i << "\n";
    }

    cout << "Without Even Numbers" <<"\n";

    for (int i = 30; i > 2; i-= 3)
    {
        if (i % 2 != 0)
        {
        cout << i << "\n";
        }
    }
    
    */







    /*  14

    int num = 2;
    while (num < 520) {
        if (num == 2)
        {
            cout << 1 << "\n";
            num = num * 2;
        }
        cout << num << "\n";
        num = (num + 1) * 2;
    }

    */







    /*    15
    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};

    for (int i = 0; i < size(nums); i++)
    {
        if (i == 0)
        {
        cout << nums[i] + nums[help_num] << "\n";
        }else{
        cout << nums[i] + nums[help_num - i] << "\n";
        }
        
    }
    */







   /* 16

   int index = 10;
    int jump = 2;

    for (;;){
    cout << index  << "\n";
    index -= jump;
    if (index == jump){
        break;
    }
  }

  */






    /*  17
    
    int up20 = 0;
    for (int i = 0; i < 24 ; i++)
    {
        if (i < 10)
        {
        cout << "00" << i << "\n";
        }else if (i <= 20)
        {
        cout << "0" << i << "\n";
        }else{
            cout << "10" << up20  << "\n";
            up20++;
        }   
    }

    */








    /*   18 
    for (int i = 0 ; i <= 1000 ; i += 100) 
    {
        if (i == 0){
            i = 100;
        }

        if (i == 500 || i == 1000)
        {
            continue;
        } 

        cout << i << "\n";
    }
    */








    /* 19
    for(int i = 100 ; i <= 1100 ; i+=100){
        if (i == 100 || i == 1100)
        {
        cout << i << "\n";
        }else{
        cout << i << "\n";
        cout << i << "\n";
        }
    }    
    */







   /* 20
   string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
   for ( int i = 0; i < size(names) ; i++){
    if (size(names[i]) == 5)
    {
        cout << names[i] << "\n";
    }
   }
   */

    return 0 ;
}