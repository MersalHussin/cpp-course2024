#include <iostream>
#include <cctype>
#include <algorithm>
#include <cmath>
using namespace std;

    /*  1
    int calcspecial (int n1 , int n2){
            if (n1 == n2){
            n1 + n2 ;
            }else if( n1 > n2){
            n1 - n2 ;
            }else{
            n2 - n1 ;
            }   
        return n1 + n2 ; 
    }
    */





   /*   2
   float money(  float salary , int days){

    int weeks = days / 7;
    int holidays = weeks * 2 ;

    cout << holidays << " Holidays aviliable"<< "\n";
        

    return salary / (days - holidays);
   }

   */






    /*  3 (forwand declration) from line ...
    int plusnums(int numone, int numtwo);
    int minusnums(int numone, int numtwo);
    int divnums(int numone, int numtwo);
    */





    /* 4
   int calculation(int n1 = 100 , int n2 = 50 , int n3 = 150){

    return n1 + n2 + n3;
   }
    */


   /* 5
    int rebaet = 0;
   int thepower(int base , int power){
    int result = 1;
        // Method 1

    // if (base == 0)
    // {
    //     result = base;
    //     cout << "Please Text The Base Above 0 \n";
    // }else{
    //     for (int i = 0; i < power; i++)
    //     {
    //         result = result * base;
    //     }
    //     cout << result;
    // }


        // Method 2 (not logical)

            // result = pow(base , power);



        // Method 3 (function redcuion)


    // Here check if rebeat < power to know if power function is done
    // في حاجه عاوز أفهمه وهي إن النتيجة لو طبعتها قبل الـ ريتيرن هتجيبلي قيمة الـ base
        if (rebaet < power)
        {
            result = base;
            rebaet++;
        }

        if (rebaet == power)
        {
            cout << "The Powering Is Done The Resuilt Is : ";
            // rebeat equal zero to if i need start function agian with deffrent values don't get error
            rebaet = 0;
            return result;
        }
        
        
        cout << result << "\n";

    return result * thepower(result , power) ;

    // 2 * (thepower(2 , 3) => 2 ) 
    // 2 * (thepower(2 , 3) => 2 ) 
    // 2 * (2) * (thepower(2 , 3) => 2)
    // 2 * (2) * (2) => 8
   }
*/






    /* 6 

   string swapping (string word){
    for (int  i = 0; i < size(word); i++)
    {
        if (word[i] =='H' || word[i] == 'h')
        {
            continue;
        }
        if(isupper(word[i]))
        {
            word[i] = char(tolower(word[i]));
        }else{     
            word[i] = char(toupper(word[i]));
        }

    }
        return word;
    
   }

   */





/*   7
int beforeresult(int main , int numsbefore){

int result = 0;
for (int i = 0; i <= numsbefore; i++)
{
    if (i == 0)
    {
          cout << "The Main Number " << main << "\n";
    }else{
          cout << main - i << (i < numsbefore ? "," : "\n" );
          result += main - i;
    }
}
    cout << "The Total of this result is : ";
    return main + result;

}
*/




/*8
 int plusandmultiply(int arr[] , int arrSize){
    int n1 ,n2 ;
    n2 = 1;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            n1 += arr[i];
        }else{
            n2 = n2 * arr[i];
        }

    }
        return n1 + n2;
    
 }*/




    /*9
    int sumall (int arrOfNums[] , int arrSize , int noneedNum){
        int result = 0;
        for (int i = 0; i < arrSize; i++)
        {
            if (arrOfNums[i] == noneedNum)
            {
                continue;
            }else{
                result += arrOfNums[i];
            }
        }

        return result ;
    }
    */



   /*10
    int minpositive(int nums[], int sizeNums) {
        int minPNum = 50;

        for(int i = 0 ; i < sizeNums ; i++) {
            if (nums[i] > 0 && nums[i] < minPNum) {
                minPNum = nums[i]; 
            }
        }

        return minPNum;
    }
    */




   /* 11
    int firstnegative(int nums[] , int numsSize){
        // الي معمول عليه كومنت دي طريقة حل تانية بما إن أول عنصر متثبت
        int maxNegNum = -10;
        // int result = 0;
        for (int i = 0; i < numsSize; i++)
        {
            if (nums[i] < 0 && nums[i] > maxNegNum)
            // if (nums[i] < 0 && nums[i] > nums[0])
            {
                maxNegNum = nums[i];
                // result = nums[i]
            }
            
        }
        return maxNegNum;
        // return result
         
    }
    */




   /* 12
   string createurl(string portocol , string name , string domain , bool Is_has_www = true){
        if (Is_has_www)
        {
            return   portocol +"://" + "www." + name + "." + domain ;
        }else{
            return   portocol +"://" +  name + "." + domain ;
        }   
   }
   */


  /* 13
  string greeting(string name , string kind = "ntitle"){
    if (kind == "Male")
    {
        return "Hello Mr " + name ;
    }else if (kind == "Female"){
        return "Hello Miss "+ name ;
    }else{
        return "Hello " + name ;
    }
    
  }
    */




    /*   14
    int calculate(int n1 , int n2 , string operation = "add"){
        if (operation == "a" || operation == "add")
        {
            return n1 + n2; 
        }else if(operation == "s" || operation == "subtract"){
            return n1 - n2;
        }else if(operation == "m" || operation == "multiply"){
            return n1 * n2;
        }else{
            return 0;
        }
    }
    */


   /* 15
   float avg(int arrOfNums[] , int sizeOfArr){
       float days = 0;
        for (int i = 0; i < sizeOfArr; i++)
        {
            days += arrOfNums[i];
        }
        return days/sizeOfArr;
   }
   */



  /* 16
  int books(int sBooks , int mBooks , int lBooks , int spaces){
        int sBooksSpaces = 2 * sBooks;
        int mBooksSpaces = 4 * mBooks; 
        int lBooksSpaces = 6 * lBooks;
        int spaceOfSpaces = 20 * spaces;

        int allBooks = sBooksSpaces + mBooksSpaces + lBooksSpaces;

        int avilableSpaces = spaceOfSpaces - allBooks;

        if (avilableSpaces > 0)
        {
            return avilableSpaces;
        }else{
            return 0;
        }
  }

  */






  // 17 (final)
  int pricing(int sPhones ,int uPhones ,int nPrice ,int tax){
    int usedPhonesPrice = uPhones *  (nPrice - 200);
    int newPhonesPrice = (sPhones - uPhones) * nPrice;
    int allPhonesPrice = usedPhonesPrice + newPhonesPrice;
    int texEquation = allPhonesPrice * tax / 100;

    int earnPrice = allPhonesPrice - texEquation;

    return earnPrice;    
  }

int main(){
    /*  1 function is up
   cout << calcspecial(40, 40) << "\n"; // First = Second ->  40 + 40 = 80
   cout << calcspecial(200, 50) << "\n"; // First > Second -> 200 - 50 = 150
   cout << calcspecial(100, 300) << "\n"; // First < Second -> 300 - 100 = 200

    */





   /* 2 

    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150
    */




   /* 3
    cout << plusnums(50, 60) << "\n"; // 110
    cout << minusnums(150, 50) << "\n"; // 100
    cout << divnums(100, 5) << "\n"; // 20
    */






   /* 4 
    cout << calculation(50, 100, 150) << "\n"; // 300
    cout << calculation(100, 50) << "\n"; // 300
    cout << calculation(100) << "\n"; // 300
    */



    /*  5
    cout << thepower(2,5) << "\n"; // 32
    cout << thepower(2,3) << "\n"; // 8
    */



   /* 6 
   
    cout << swapping("hero Of THe PROgramming");
    */


    /* 7
     cout << beforeresult(10, 5) << "\n";
    cout << beforeresult(15, 3)  << "\n";
    */




   /*  8
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
    */





   /*9

    int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
    int numssize = size(numbers);
    int noneed = 13;
    cout << sumall(numbers, numssize, noneed) << "\n";
    */


   /* 10
   
  int numbers[] = { -10, -20, 15, 100, 10 , 5, 10,  20 , 15 -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  */



    /* 11

    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers, numssize) << "\n";
    */


   /* 12

    cout << createurl("https", "elzero", "org" , false) << "\n"; // https://www.elzero.org
    cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
    cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
    */


    /* 13
    cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
    cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
    cout << greeting("Sameh") << "\n"; // Hello Sameh
    */




    /* 14
  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
    */


   /* 15
     int money[] = { 10, 20, 15, 25, 30, 35 };
    int monsize = size(money);
    cout << avg(money, monsize) << "\n"; // 22.5
    */




   /*16
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    */





   // 17
     cout << pricing(50, 10, 800, 20) << "\n"; // 30400
     

    return 0;
} 

/* 3 (forward declaration) => the forward in the top with 3 comment at 41 line
int plusnums(int numone, int numtwo)
{
 return numone + numtwo;
}
int minusnums(int numone, int numtwo)
{
 return numone - numtwo;
}
int divnums(int numone, int numtwo)
{
 return numone / numtwo;
}
*/