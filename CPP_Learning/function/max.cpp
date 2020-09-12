/**
* max.cpp
* @author bulbasaur
* @description 
* @created 2020-09-08T10:25:26.862Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-08T10:45:03.142Z+08:00
*/

#include <iostream>
using namespace std;
int max(int num1, int num2);

int main(int argc, char const *argv[])
{
    // cout << "Hello CPP" << endl;
    int a = 2;
    int b = 3;
    int ret;
    
    // 调用函数获取最大值
    ret = max(a, b); 
    
    cout << "Max value is: " << ret << endl;
    
    return 0;
}

int max(int num1, int num2) {
    // 局部变量声明
    int result;
    
    if (num1 > num2)
    {
        /* code */
        result = num1;
    } else
    {
        /* code */
        result = num2;
    }
    
    return result;
}