/**
* whileLoop.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T14:05:49.857Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T14:07:13.376Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 局部变量声明
    int a = 10;
    
    // while 循环执行
    while (a < 20)
    {
        /* code */
        cout << "a: " << a << endl;
        a++;
    }
    
    return 0;
}
