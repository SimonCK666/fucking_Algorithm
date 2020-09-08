/**
* range-based_ForLoops.cpp
* @author bulbasaur
* @description 
* @created 2020-08-14T14:11:43.921Z+08:00
* @copyright None 
* None
* @last-modified 2020-08-14T14:18:50.739Z+08:00
*/


// for 允许简单的范围迭代

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int my_array[5] = {1, 2, 3, 4, 5};
    // 每个数组元素乘以 2 
    for (int &x : my_array) {
        x *= 2;
        cout << x << endl;
    }

    cout << "------------" << endl;

    int my_array2[5] = {1, 2, 3, 4, 5};
    // auto 类型也是 C++11 新标准中的， 用来自动获取变量的类型
    for (auto &y : my_array2) {
        y *= 3;
        cout << y << endl;
    }

    cout << "------------" << endl;

    string str("some string");
    // range for 语句
    for ( auto &c : str) {
        // 大写
        c = toupper(c);
    }
    cout << str << endl;
    
    return 0;
}
