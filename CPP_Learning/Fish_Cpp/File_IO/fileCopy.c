/**
* fileCopy.c
* @author bulbasaur
* @description 
* @created 2021-02-09T22:20:33.082Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T23:00:51.609Z+08:00
*/

#include <stdio.h>
#include <stdlib.h>

// argc: 程序的参数数量，包括本身 ： 3   命令：fileCopy.exe in.c out.c
// argv: 每个指针只想命令行的一个字符串，所以 argv[0] 指向字符串 "copyFile.exe"  argv[1] 指向 "in.c"  argv[2] 指向 "out.c"
int main(int argc, char const *argv[])
{
    FILE *in, *out;
    int ch;

    if (argc != 3)
    {
        /* code */
        fprintf(stderr, "输入形式：copyFile 源文件名 目标文件名 \n");
        exit(EXIT_FAILURE);
    }

    if ((in = fopen(argv[1], "rb")) == NULL)
    {
        /* code */
        fprintf(stderr, "Can not open the file: %s \n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((out = fopen(argv[2], "wb")) == NULL)
    {
        /* code */
        fprintf(stderr, "Can not open the file: %s\n", argv[2]);
        fclose(in);   //擦屁股
        exit(EXIT_FAILURE);
    }

    // Copy
    while ((ch = getc(in)) != EOF)   // EOF = end of file
    {
        /* code */
        if (putc(ch, out) == EOF)
        {
            /* code */
            break;
        }
        
    }

    // Test
    if (ferror(in))
    {
        /* code */
        printf("读取文件 %s 失败! \n", argv[1]);
    }
    
    if (ferror(out))
    {
        /* code */
        printf("写入文件 %s 失败! \n", argv[2]);
    }

    printf("Success!\n");
    
    
    fclose(in);
    fclose(out);   // 擦屁股
    
    return 0;
}
