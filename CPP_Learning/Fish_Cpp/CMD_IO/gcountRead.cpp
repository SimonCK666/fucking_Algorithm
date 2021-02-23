/**
* gcountRead.cpp
* @author bulbasaur
* @description 
* @created 2021-02-09T21:57:44.645Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T22:02:46.710Z+08:00
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int SIZE = 50;
    char buf[SIZE];

    cout << "Please input txt: ";
    cin.read(buf, 20);   // 收集 20 位字符

    cout << "字符串收集到的字符数为：" << cin.gcount() << endl;

    cout << "输入的文本信息为：";
    
    cout.write(buf, 10);   // 写入 10 位字符
    cout << endl;
    
    return 0;
}
