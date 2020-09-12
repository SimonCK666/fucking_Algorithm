/**
* swap_pointer.cpp
* @author bulbasaur
* @description 
* @created 2020-09-08T10:51:37.883Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-08T10:53:18.415Z+08:00
*/

#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 200;
    
    cout << "Before: a: " << a << endl;
    cout << "Before: b: " << b << endl;
    
    swap(&a, &b);
    
    cout << "After: a: " << a << endl;
    cout << "After: b: " << b << endl;

    return 0;
}
