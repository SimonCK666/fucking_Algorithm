/**
* iosInOut.cpp
* @author bulbasaur
* @description 
* @created 2021-02-09T23:23:25.805Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T23:29:12.145Z+08:00
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream fp("test.txt", ios::in | ios::out);

    if ( !fp )
    {
        /* code */
        cerr << "Error open file!" << endl;
        return 0;
    }

    fp << "Ilovelqq!";

    static char str[100];

    fp.seekg(ios::beg);   // 使得文件指针指向文件头 ios::end 是文件尾
    fp >> str;
    cout << str << endl;

    fp.close();
    
    return 0;
}
