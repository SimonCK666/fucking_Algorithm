/**
* getElem.c
* @author bulbasaur
* @description 
* @created 2021-02-13T17:02:27.285Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-13T17:07:06.870Z+08:00
*/

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;

// Status 是函数类型，其值是函数结果状态代码，如 OK 等，
// 初始条件：顺序线性表 L 已存在， 1 <= i <= ListLength(L)
// 操作结果：用 e 返回 L 中第 i 个数据元素的值

Status GetElem(SqList L, int i, ElemType *e) 
{
    if (L.length == 0 || i < 1 || i > L.length)
    {
        /* code */
        return ERROR;
    }
    
    *e = L.data[i - 1];

    return OK;
    
}