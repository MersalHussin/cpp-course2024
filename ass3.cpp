#include <iostream>
#include <limits.h>
using namespace std;

int main() {

/*     1
// Example
false // bool => Boolean

'a' // string
'9' // string
9 // int => integer
true // bool => booleam
100 // int => integer
-10 // int => integer
0 // int => integer
false // bool => boolean
10.9 // float / double
*/







/*     2
double salary = 5000.98;
cout << sizeof(salary) << endl;// 8 Bytes
cout << sizeof(salary) * 8;// 64 Bits
*/







/*     3

cout << "Maximum Integer Number Is => " << INT_MAX << endl;
cout << "Minimum Integer Number Is => " << INT_MIN << endl;
cout << "Maximum Short Integer Number Is => " <<  SHRT_MAX << endl;
cout << "Minimum Short Integer Number Is => " <<  SHRT_MIN << endl;

// Output Needed
// "Maximum Integer Number Is => 2147483647"
// "Minimum Integer Number Is => -2147483648"
// "Maximum Short Integer Number Is => 32767"
// "Minimum Short Integer Number Is => -32768"

*/








/*     4
// Edit Line To Make 8 Become 4
cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 8

// الحل هو إضافة حرف الـ f
*/


/*5
char a = '~';
char b = '&';
char c = '%';
char d = 'A';

cout << "ASCII value of " << a << " Is " << int(a) << endl;
cout << "ASCII value of " << b << " Is " << int(b) << endl;
cout << "ASCII value of " << c << " Is " << int(c) << endl;
cout << "ASCII value of " << d << " Is " << int(d) << endl;
// Output Needed
// "ASCII Value of ~ Is 126"
// "ASCII Value of & Is 38"
// "ASCII Value of % Is 37"
// "ASCII Value of A Is 65"

*/







/*6

int a = 69;
int b = 108;
int c = 122;
int d = 101;
int e = 114;
int f = 111;


cout << "Character of This ASCII Value " << a << " Is " << char(a) << endl;
cout << "Character of This ASCII Value " << b << " Is " << char(b) << endl;
cout << "Character of This ASCII Value " << c << " Is " << char(c) << endl;
cout << "Character of This ASCII Value " << d << " Is " << char(d) << endl;
cout << "Character of This ASCII Value " << e << " Is " << char(e) << endl;
cout << "Character of This ASCII Value " << f << " Is " << char(f) << endl;

cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f);
// Output Needed
// "Character Of This ASCII Value 69 Is E"
// "Character Of This ASCII Value 108 Is l"
// "Character Of This ASCII Value 122 Is z"
// "Character Of This ASCII Value 101 Is e"
// "Character Of This ASCII Value 114 Is r"
// "Character Of This ASCII Value 111 Is o"

// // Output Needed In Last Line
// "Elzero"

*/






/*     7

// 69 87 83
int a = 1;
int b = 13;
int c = 17;
int d = 70;

cout << char(d-a) << char(d+c) << char(d+b) << endl;

// Output Needed
// "EWS"

*/






/*     8

// Edit Anything Except Values
int a = 100;
int b = 15001500;
double c = 100.54565746;

// Do Not Edit
cout << sizeof((short)a) << " Bytes\n"; // 2 Bytes
cout << sizeof((long long)b) << " Bytes\n"; // 8 Bytes
cout << sizeof((long long) c ) *2 << " Bytes\n"; // 16 Bytes
*/







/*      9

// Edit Anything Except Values
    int a = 100;
    int b = -100;
    short c = 100;
    float d = 500.55;

// Do Not Edit
cout << a << "\n"; // 100
cout << b << "\n"; // -100
cout << c << "\n"; // 100
cout << d << "\n"; // 500.55
*/







/*      10

//1
using lli = long long int;
// //2
// typedef long long int lli;
// //3
// int <typename T>
// using lli = std::vector<T>;

// Do Not Edit
lli num = 150050005; // This Is Long Long Int
cout << num << "\n"; // 150050005
*/






/*      11
// Do Not Edit Here
int a = 100;
float b = 98.5f;
double c = 1.7;

// Edit This Line And Use Type Casting To Get The Output
cout << a + int(b + c) << "\n"; // 200

*/









/*      12

// Do Not Edit Here
short a = 1000;
int b = 10000;
long double c = 5.560000505012;

// Change ??? To Something Else To Get The Output
cout << sizeof(c) - sizeof(b) << "\n"; // 12
cout << sizeof(c) + sizeof(b) << "\n"; // 20
cout << sizeof(a) * sizeof(c) << "\n"; // 32
cout << a * int(c) << "\n"; // 5000
cout << char((sizeof(b) + sizeof(b) + sizeof(a)) * sizeof((double)c) )<< "\n"; // P (80)

*/
}