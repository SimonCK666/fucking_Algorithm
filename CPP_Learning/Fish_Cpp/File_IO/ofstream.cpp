/**
* ofstream.cpp
* @author bulbasaur
* @description 
* @created 2021-02-09T23:08:25.594Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T23:14:58.865Z+08:00
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // 文件的写入类
    ofstream out;

    out.open("test.txt");   // 打开文件

    if ( !out )
    {
        /* code */
        cerr << "Error open file!" << endl;
        return 0;
    }

    for (int i = 0; i < 10; i++)
    {
        /* code */
        out << i;
    }

    out << endl;
    out.close();
    
    
    return 0;
}

