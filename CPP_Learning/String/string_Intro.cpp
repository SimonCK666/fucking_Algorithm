/**
* string_Intro.cpp
* @author bulbasaur
* @description 
* @created 2020-09-10T16:58:53.262Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-10T17:00:22.739Z+08:00
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    std::cout << "Greeting message: ";
    std::cout << greeting << std::endl;
    
    return 0;
}
