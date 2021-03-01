/**
* ListDelete.c
* @author bulbasaur
* @description 
* @created 2021-02-13T19:50:26.674Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-25T11:21:09.841Z+08:00
*/

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
 
typedef int Status;

// 初始条件：顺序线性表 L 已存在， 1 <= i <= ListLength(L)
// 操作结果：删除 L 的第 i 个数据元素，并用 e 返回其值

Status ListDelete(SqList *L, int i, ElemType *e) 
{
    int k;

    if (L->length == 0)
    {
        /* code */
        return ERROR
    }

    if (i < 1 || i > L->length)
    {
        /* code */
        return ERROR
    }

    *e = L->data[i-1];

    if (i < L->length)
    {
        /* code */
        for ( k = i; k < L->length; k++)
        {
            /* code */
            L->data[k -1] = L->data[k];
        }
        
    }
    
    L->length--;

    return OK;
    
}