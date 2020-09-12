/**
* array_Output.cpp
* @author bulbasaur
* @description 
* @created 2020-09-10T16:03:28.974Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-10T16:06:30.854Z+08:00
*/

#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main(int argc, char const *argv[])
{
    int n[10];

    for (int i = 0; i < 10; i++)
    {
        /* 设置元素 i 为 i + 100 */
        n[i] = i + 100;
    }
    std::cout << "Element" << setw(13) << "Value" << std::endl;
    
    for (int j = 0; j < 10; j++)
    {
        /* code */
        std::cout << setw(7) << j << setw(13) << n[j] << std::endl;
    }
    
    return 0;
}
