/**
* blankSpace.cpp
* @author bulbasaur
* @description 
输入一串数字带有空格，并求和
* @created 2021-02-09T21:08:51.023Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T21:22:12.902Z+08:00
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int i;
    
    cout << "Please input numbers and blank spaces: " << endl;
    
    // 流对象：cin: 对象的类型是 istream，知道如何从用户终端读取数据
    while (cin >> i)   // cin输入操作符又称为提取操作符，一次输入流对象cin提取一个整数
    // 当用户进行键盘输入时，对应的字符将输入到操作系统的键盘缓冲区中
    // 这样，当用户点击键盘上的 “Enter” 键时，操作系统把键盘缓冲区的内容传输到cin流的内部缓冲区，
    // “>>” 操作符随后从这个缓冲区提取需要的信息 
    {
        /* code */
        sum += i;
        while (cin.peek() == ' ')
        {
            /* code */
            cin.get();
        }

        if (cin.peek() == '\n')
        {
            /* code */
            break;
        }
        
        
    }
    
    cout << "Result: " << sum << endl;

    return 0;
}
