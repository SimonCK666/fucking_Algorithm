/**
* defineConstants.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T09:12:19.917Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T09:16:29.422Z+08:00
*/

#include <iostream>
using namespace std;

// #define 预处理器
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(int argc, char const *argv[])
{
    int area;
    
    area = LENGTH * WIDTH;
    
    cout << area;
    cout << NEWLINE;

    // const 关键字
    const int L = 10;
    const int W = 5;
    int a;
    a = L * W;

    cout << a;
    cout << NEWLINE;
    
    return 0;
}
