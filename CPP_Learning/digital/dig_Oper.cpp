/**
* dig_Oper.cpp
* @author bulbasaur
* @description 
* @created 2020-09-10T15:45:47.421Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-10T15:50:13.204Z+08:00
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    short s = 10;
    int i = 1000;
    long l = 1000000;
    float f = 230.47;
    double d = 200.374;

    std::cout << "sin(d): " << sin(d) << std::endl;
    std::cout << "abs(i): " << abs(i) << std::endl;
    std::cout << "floor(d): " << floor(d) << std::endl;
    std::cout << "sqrt(f): " << sqrt(f) << std::endl;
    std::cout << "pow(d, 2): " << pow(d, 2) << std::endl;
    
    return 0;
}
