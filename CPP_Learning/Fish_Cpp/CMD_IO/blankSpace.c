/**
* blankSpace.c
* @author bulbasaur
* @description 
输入一串数字和任意数字的空格，并进行求和
* @created 2021-02-09T11:17:36.402Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T21:07:38.718Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    int sum = 0;
    char ch;

    printf("Please input numbers and blank spaces: ");

    while (scanf("%d", &i) == 1)
    {
        /* code */
        sum += i;

        while ((ch = getchar()) == ' ');   // 屏蔽空格
        
        if (ch == '\n')
        {
            /* code */
            break;
        }

        // 将变量ch中存放的字符退回为stdin输入流
        ungetc(ch, stdin);
         
    }

    printf("Result: %d\n", sum);
    system("pause");
    
    return 0;
}
