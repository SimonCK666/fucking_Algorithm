/**
* relationalOperator.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T13:42:46.093Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T13:45:44.711Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 21;
    int b = 10;
    int c;

    if (a == b)
    {
        /* code */
        cout << "Line 1 - a = b" << endl;
    } else
    {
        /* code */
        cout << "Line1 - a != b" << endl;
    }

    if (a < b)
    {
        /* code */
        cout << "Line 2 - a < b" << endl;
    } else
    {
        /* code */
        cout << "Line 2 - 1 > b" << endl;
    }
    
    return 0;
}
