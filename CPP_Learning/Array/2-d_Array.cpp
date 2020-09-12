/**
* 2-d_Array.cpp
* @author bulbasaur
* @description 
* @created 2020-09-10T16:46:28.679Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-10T16:51:30.448Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};

    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            std::cout << "a[ " << " ][ " << j << " ]: " << std::endl;
            std::cout << a[i][j] << std::endl;
        }
        
    }
    
    return 0;
}
