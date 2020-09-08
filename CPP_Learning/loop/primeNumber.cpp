/**
* primeNumber.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T14:24:19.772Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T14:28:43.439Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j;
    for (int i = 2; i < 100; i++)
    {
        /* code */
        for (int j = 2; j <= (i / j); j++)
        {
            /* code */
            if (!(i % j))
            {
                /* 如果找到，则不是质数 */
                break;
            }
            
            
        }
        if (j > (i / j))
        {
            /* 找到是质数 */
            cout << i << " is Prime Number\n";
        }
        
    }
    
    return 0;
}
