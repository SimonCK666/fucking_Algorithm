/**
* string_func.cpp
* @author bulbasaur
* @description 
* @created 2020-09-10T17:01:26.147Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-10T17:04:47.217Z+08:00
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char str1[11] = "Hello";
    char str2[12] = "world";
    char str3[11];
    int len;

    // 复制 str1 到 str3
    strcpy(str3, str1);
    std::cout << "strcpy(str3, str2): " << str3 << std::endl;
    
    // 连接 str1 和 str2
    strcat(str1, str2);
    std::cout << "strcat(str1, str2): " << str1 << std::endl;
    
    // 连接后， str1的总长度
    len = strlen(str1);
    std::cout << "strlen(str1): " << len << std::endl;
    
    return 0;
}
