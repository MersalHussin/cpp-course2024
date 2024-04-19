#include <iostream>
using namespace std;
int main(){
    string products [] = {"Item 1","Item 2","Item 3"};
    int productsSize = (sizeof(products) / sizeof(products[0]));
    string sizes [] = {"Small","Mediuam","Large" , "X-Large"};
    int sizesSize = (sizeof(sizes) / sizeof(sizes[0]));

    for (int i = 0; i < productsSize; i++)
    {
        cout<< "Product Name : ";
        cout<< products[i] << "\n";
        for (int j = 0; j < sizesSize ; j++)
        {
    // بشوف أخر عنصر مش عاوز أضيف فيه الكوما دي
             cout << sizes[j] << ( j < (sizesSize -1) ? ", " : "" );
    // بـ الـ اف العادية
            //  if (j < sizesSize - 1)
            //  {
            //     cout<< ", ";
            //  }
             
        }
        cout << "\n";
    // بشوف أخر عنصر عشان مش عاوز أضيف فيه الفرق ده
        cout << ( i < (productsSize - 1) ? "========================\n" : "" );
    // بـ الـ اف العادية
        // if (i < productsSize -1)
        // {
        // cout<< "========================" << "\n";
        // }
    }
    
    return 0;
}