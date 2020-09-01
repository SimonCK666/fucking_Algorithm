/**
* isPrime.c
* @author bulbasaur
* @description 
* @created 2020-09-01T21:36:39.898Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-01T21:46:49.789Z+08:00
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int is_Prime(int n) {
    // Wrong
    // for (int i = 2; i * i < n; i++)
    // {
    //     /* code */
    //     if (n % i == 0)
    //     {
    //         /* code */
    //         return 0;
    //     }
    //     return 1;
    // }
    
    // Right
    if (n <= 1)
    {
        /* code */
        return 0;
    }
    // floor: 向下取整，即求不大于某个数的最大整数
    int m = floor(sqrt(n) + 0.5);
    for (int i = 0; i <= m; i++)
    {
        /* code */
        if (n % i == 0)
        {
            /* code */
            return 0;
        }
        
    }
    return 1;
    
    
}

int main(int argc, char const *argv[])
{
    int n = 11;
    int ans = is_Prime(n);
    printf("%d\n", ans);
    
    // system("pause");
    return 0;
}
