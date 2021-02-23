/**
* peek.cpp
* @author bulbasaur
* @description 
* @created 2021-02-09T21:28:52.737Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T21:56:45.208Z+08:00
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char p;
    cout << "Please input txt: ";
    
    // peek 从字符串中挑取一个字符
    while (cin.peek() != '\n')
    {
        /* code */
        p = cin.get();
        cout << p;
    }

    cout << endl;
    
    return 0;
}
