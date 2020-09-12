/**
* digital.cpp
* @author bulbasaur
* @description 
* @created 2020-09-10T15:41:43.548Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-10T15:44:44.933Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    short s;
    int i;
    long l;
    float f;
    double d;

    s = 10;
    i = 1000;
    l = 100000;
    f = 230.47;
    d = 30949.374;

    std::cout << "short s: " << s << std::endl;
    std::cout << "int i: " << i << std::endl;
    std::cout << "long l: " << l << std::endl;
    std::cout << "float f: " << f << std::endl;
    std::cout << "double d: " << d << std::endl;
    
    return 0;
}
