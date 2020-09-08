/**
* define.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T08:59:33.759Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T09:03:29.419Z+08:00
*/

#include <iostream>
using namespace std;

// 变量声明
extern int a, b;
extern int c;
extern float f;

int main(int argc, char const *argv[])
{
    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;
    
    
    f = 20.0 / 3.0;
    cout << f << endl;
    
    return 0;
}
