/**
* if_else.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T14:36:17.758Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T14:40:02.203Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 100;
    
    if (a < 20)
    {
        /* code */
        cout << " a < 20" << endl;
    } else
    {
        /* 如果条件为假， 则输出下面的语句 */
        cout << " a > 20" << endl;
    }


    cout << " a: " << a << endl;
    
    
    return 0;
}
