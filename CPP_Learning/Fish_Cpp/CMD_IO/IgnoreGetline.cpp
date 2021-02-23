/**
* cIgnoreGetline.cpp
* @author bulbasaur
* @description 
* @created 2021-02-09T21:25:05.476Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T21:28:35.601Z+08:00
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char buf[20];

    cin.ignore(7);   // 忽略 7 个
    cin.getline(buf, 10);   // 保留 10 个

    cout << buf << endl;
    
    return 0;
}
