/**
* precision.cpp
* @author bulbasaur
* @description 
* @created 2021-02-09T22:04:38.679Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T22:10:15.014Z+08:00
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double result = sqrt(3.0);

    cout << "对 3 开方保留小数点后 0 ~ 9 位，结果如下: \n" << endl;

    for (int i = 0; i <= 9; i++)
    {
        /* code */
        cout.precision(i);   // 精度位数 
        cout << result << endl;
    }

    cout << "当前的输出精度为：" << cout.precision() << endl;
    
    return 0;
}
