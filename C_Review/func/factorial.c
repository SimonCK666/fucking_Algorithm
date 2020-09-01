/**
* factorial.c
* @author bulbasaur
* @description 
* @created 2020-09-01T21:12:51.842Z+08:00
* @copyright None 
* None
* @last-modified 2020-09-01T21:19:59.541Z+08:00
*/

#include <stdio.h>

long long factorial(int n, int m) {
    if (m < n - m)
    {
        /* code */
        m = n - m;
    }
    long long ans = 1;
    for (int i = m; i <= n; i++)
    {
        /* code */
        ans *= i;
    }
    for (int i = 1; i < n - m; i++)
    {
        /* code */
        ans /= i;
    }
    
    return ans;
}

int main(int argc, char const *argv[])
{
    int n = 3;
    int m = 1;
    long long ans = factorial(n, m);
    printf("%lld", ans);
    
    return 0;
}
