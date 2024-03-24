#include <iostream>
using namespace std;
int main(){
    
// Crate Array With 4 elements

    int nums[4];
    
// Add to Array

    nums[0] = 100;
    nums[2] = 300;
    nums[1] = 200;
    nums[3] = 400;

// check at array Elements

    cout << "Element 1 " << nums[0] << "\n";
    cout << "Element 2 " << nums[1] << "\n";
    cout << "Element 3 " << nums[2] << "\n";
    cout << "Element 4 " << nums[3] << "\n";

// Update Array

    nums[0] = 500 ;
    cout << "Element 1 " << nums[0] << " After Update " << "\n";


// empty array and how get num of elements

    double anums[] = {100,200,300,400,500,600,700};
    cout << "Array Elements Count Is : " << sizeof(anums) / sizeof(anums[0]); 
return 0;
}