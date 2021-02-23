/**
* ListInsert.c
* @author bulbasaur
* @description 
* @created 2021-02-13T17:16:50.913Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-13T17:23:22.106Z+08:00
*/

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;

// 初始条件：顺序线性表 L 已经存在， 1 <= i <= ListLength(L)
// 操作结果：再 L 中第 i 个位置之前插入新的数据元素 e。L 长度 + 1


Status ListInsert(SqList *L, int i, ElemType e)
{
    int k;

    if (L->length = MAXSIZE)   // 顺序线性表已经满了
    {
        /* code */
        return ERROR;
    }

    if (i < 1 || i > L->length + 1)   // 当 i 不在范围内时
    {
        /* code */
        return ERROR;
    }
    
    if (i <= L->length)   // 若插入数据位置不在表尾
    {
        /* 将要插入位置后数据元素向后移动一位 */
        for ( k = L->length - 1; k >= i - 1; k--)
        {
            /* code */
            L->data[k + 1] = L->data[k];
        }
        
    }

    L->data[i - 1] = e;   // 将锌元素插入
    L->length++;
    
    return OK;
    
}