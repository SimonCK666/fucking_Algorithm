/**
* ArraySum.cpp
* @author bulbasaur
* @description 
定义一个存储着n个元素的数组，求和
* @created 2021-02-09T10:48:07.914Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T10:56:16.510Z+08:00
*/

#include <stdio.h>
int main() {
    int a[] = {1, 2, 3};
    int sum = 0;

    for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    {
        /* code */
        sum += a[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
    
}

int addArray(int array[], int n) {
    int sum = 0;
    
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        /* code */
        sum += array[i];
    }

    return sum;
    
}