/**
* fileCopy.cpp
* @author bulbasaur
* @description 
* @created 2021-02-09T22:19:35.761Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T23:14:48.599Z+08:00
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    // 文件的读取类
    ifstream in;
    
    in.open("test.txt");   // 打开文件
    
    if ( !in )
    {
        /* code */
        cerr << "Error open file!" << endl;
        return 0;
    }
    
    char x;
    
    while (in >> x)
    {
        /* code */
        cout << x;
    }
    
    cout << endl;
    in.close();
    
    return 0; 
}
