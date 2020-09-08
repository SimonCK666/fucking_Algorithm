/**
* calculusOperator.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T13:37:05.206Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T13:41:18.571Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line 1 - c = " << c << endl;
    c = a - b;
    cout << "Line 2 - c = " << c << endl;
    c = a / b;
    cout << "Line 3 - c = " << c << endl;
    c = a % b;
    cout << "Line 4 - c = " << c << endl;
    
    int d = 10;
    c = d++;
    cout << "Line 5 - c = " << c << endl;
    
    c = d--;
    cout << "Line 6 - c = " << c << endl;
    
    return 0;
}
