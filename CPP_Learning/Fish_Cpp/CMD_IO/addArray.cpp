/**
* addArray.cpp
* @author bulbasaur
* @description 
数组求和
* @created 2021-02-09T10:59:35.534Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T11:09:36.443Z+08:00
*/

#include <iostream>   // C92 inostream.h

using namespace std;   // 命名空间

int addArray(int *array, int n);

int main(int argc, char const *argv[])
{
    int data[] = {1, 2, 3};

    cout << "Result: " << addArray(data, sizeof(data)/sizeof(int)) << endl;
    
    return 0;
}

int addArray(int *array, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        sum += array[i];
    }

    return sum;
    
}

