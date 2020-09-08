/**
* do_whileLoop.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T14:22:12.188Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T14:23:14.256Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    
    do
    {
        /* code */
        cout << "a: " << a << endl;
        a += 1;
    } while (a < 20);
    
    return 0;
}
