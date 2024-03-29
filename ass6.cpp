#include <iostream>
#include <array>
using namespace std;

int main(){

/* 1
int nums[]{100, 300, 600, 900};
string awards[]{"iPhone", "iPad", "PC", "Car"};

cout << "Number " << nums[0] << "Award Is: " << awards[0] << "\n";
cout << "Number " << nums[1] << "Award Is: " << awards[1] << "\n";
cout << "Number " << nums[2] << "Award Is: " << awards[2] << "\n";
cout << "Number " << nums[3] << "Award Is: " << awards[3] << "\n";

*/







/*2

// // Example 1
// int check = 25;
// int nums[]{40, 20, 30, 70, 100};

// // Ouput
// // "{40} + {70} = 110"

// if (check < nums[0])
// {
//     cout  << nums[0] + nums[3];
// }


// // Example 2
int check = 25;
int nums[]{20, 35, 30, 70, 100};

if (check < nums[1])
{
    cout  << nums[1] + nums[3] << "\n"; // 105
} 


if (check < nums[2])
{
    cout  << nums[2] + nums[3] << "\n"; // 100
}

*/







/* 3
int filling = 10;
int vals[]{100, 200, 300, 400};

vals[0] = vals[1] = vals[2] = vals[3] = filling;

cout << vals[0] << "\n"; // 10
cout << vals[1] << "\n"; // 10
cout << vals[2] << "\n"; // 10
cout << vals[3] << "\n"; // 10
*/




/*4


// Example 1
int vals[]{100, 200, 250, 400, 200};

// // Example 2
// int vals[]{100, 200, 500, 400, 200};

// // Example 3
// int vals[]{100, 200, 700, 400, 200};


if (vals[0] + vals[4] > vals[2])
{
    cout << "First Number + Last Number Is Larger Than Middle Number \n";
    cout << vals[0] << " + "<< vals[4] << " = " << vals[0]+vals[4] << "\n";
    cout <<  vals[0]+vals[4] << " > "<< vals[2] << "\n";
}else if(vals[1] + vals[3] > vals[2]){
    cout << "Second Number + Before Last Number Is Larger Than Middle Number \n";
    cout << vals[1] << " + "<< vals[3] << " = " << vals[1]+vals[3] << "\n";
    cout <<  vals[1]+vals[3] << " > "<< vals[2] << "\n";
}else{
    cout << "Middle Number Is The Largest One \n";
    cout << vals[2];
}
*/



/*5

// Example 1
int vals[] = {100, 200, 600, 200, 100}; // "Array Is Palindrome"
// Example 2
// int vals[] = {100, 200, 200, 100}; // "Array Is Palindrome"
// Example 3
// int vals[] = {100, 300, 600, 200, 100}; // "Array Is not Palindrome"


int last_ele_of_arr = (sizeof(vals) / sizeof(vals[0])) - 1;

if (vals[0] == vals[last_ele_of_arr] && vals[1] ==  vals[last_ele_of_arr - 1])
{
    cout << "Array Is Palindrome";
}else{
    cout << "Array Is Not Palindrome";
}
*/



/*6

int vals[] = {10, 20, 30};

vals[0] = vals[0] * 10;
vals[1] = vals[1] * 10;
vals[2] = vals[2] * 10;

cout << vals[0] << "\n"; // 100
cout << vals[1] << "\n"; // 200
cout << vals[2] << "\n"; // 300
  */
 
 
//  7
/*

string names[3][3] = {
    {"Ahmed","Sayed","Mahmoud"},
    {"Sameh","Mahdy","Gamal"},
    {"Mohamed","Adel","Majed"}
};

cout << "First Collection Of Names:\n";
cout << names[0][0] << "\n"; // Ahmed
cout << names[1][1] << "\n"; // Mahdy
cout << names[2][2] << "\n"; // Majed

cout << "Second Collection Of Names:\n";
cout << names[2][1] << "\n"; // Adel
cout << names[1][2] << "\n"; // Gamal
cout << names[0][2] << "\n"; // Mahmoud

cout << "Third Collection Of Names:\n";
cout << names[0][1] << "\n"; // Sayed
cout << names[1][0] << "\n"; // Sameh
cout << names[2][0] << "\n"; // Mohamed
*/



/* 8

    array<int , 3> nums={20,10,70};
    // int nums[3] = {20,10,70};
  // Do Not Edit
  nums.fill(100);
  cout << nums[0] << "\n"; // 100
  cout << nums[1] << "\n"; // 100
  cout << nums[2] << "\n"; // 100
*/


/* 9
// int nums[] = {10, 20, 30, 40, 20, 50};
array<int , 6 > nums = {10,20,30,40,20,50};
// Method 1
cout << sizeof(nums) / sizeof(nums[0]) << "\n";

// Method 2
cout << nums.size() << "\n";


// Method 3
cout << end(nums)-begin(nums); // I don't understand it well

*/








/*10

  array<int, 6> nums = {10, 20, 30, 40, 20, 50};
    int last__ele = nums.size() - 1;


  // Method 1
    cout << "First: " << nums[0] << "\n";
    cout << "Last: " << nums[last__ele] << "\n";

//   // Method 2
    cout << "First: " << nums.front() << "\n";
    cout << "Last: " << nums.back() << "\n";

//   // Method 3
    cout << "First: " << nums.at(0) << "\n";
    cout << "Last: " << nums.at(last__ele) << "\n";
*/






   return 0;
}