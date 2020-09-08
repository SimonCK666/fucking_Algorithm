/**
* assignmentOperator.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T13:47:40.034Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T13:52:34.735Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 21;
    int c;
    
    // 求模且赋值运算符，求两个操作数的模赋值给左边操作数
    // C %= A 相当于 C = C % A
    c = 200;
    c %= a;
    cout << "Line1 - %=: " << c << endl;

    // 左移且赋值运算符
    // C <<= 2 等同于 C = C << 2
    c <<= 2;
    cout << "Line2 - <<=: " << c << endl;

    // 右移且赋值运算符
    // C >>= 2 等同于 C = C >> 2
    c >>= 2;
    cout << "Line3 - >>=: " << c << endl;
    
    return 0;
}
