/**
* swap.cpp
* @author bulbasaur
* @description 
* @created 2020-09-08T10:45:32.642Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-08T10:50:47.564Z+08:00
*/

#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 200;

    cout << "Before: a: " << a << endl;
    cout << "Before: b: " << b << endl;
    
    swap(a, b);
    
    cout << "After: a: " << a << endl;
    cout << "After: b: " << b << endl;
    return 0;
}

/* 上面的实例表明了，虽然在函数内改变了 a 和 b 的值，
    但是实际上 a 和 b 的值没有发生变化。
 */