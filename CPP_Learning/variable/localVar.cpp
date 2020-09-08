/**
* localVar.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T09:04:59.723Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T09:06:43.798Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 局部变量声明
    int a, b;
    int c;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;
    
    cout << c;

    return 0;
}
