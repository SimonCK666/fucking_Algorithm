/**
* globalVar.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T09:08:31.878Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T09:10:31.359Z+08:00
*/

/* 在程序中，局部变量和全局变量的名称可以相同，
   但是在函数内，局部变量的值会覆盖全局变量的值。
   下面是一个实例：
*/

#include <iostream>
using namespace std;

// 全局变量声明
int g = 20;

int main(int argc, char const *argv[])
{
    /* 局部变量 */
    int g = 10;
    
    cout << g;
    
    return 0;
}
