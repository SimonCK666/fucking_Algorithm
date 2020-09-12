/**
* random.cpp
* @author bulbasaur
* @description 
* @created 2020-09-10T15:50:37.377Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-10T15:53:02.781Z+08:00
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j;

    // 设置种子
    srand((unsigned)time( NULL ));

    // 生成是个随机数
    for (int i = 0; i < 10; i++)
    {
        /* 生成实际的随机数 */
        j = rand();
        std::cout << "Random: " << j << std::endl;
    }
    
    
    return 0;
}
