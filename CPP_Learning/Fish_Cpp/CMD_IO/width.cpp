/**
* width.cpp
* @author bulbasaur
* @description 
* @created 2021-02-09T22:11:05.601Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T22:12:48.045Z+08:00
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int width = 4;
    char str[20];

    cout << "Please input txt: \n";
    cin.width(5);

    while (cin >> str)
    {
        /* code */
        cout.width(width++);
        cout << str <<endl;
        cin.width(5);
    }
    
    return 0;
}
