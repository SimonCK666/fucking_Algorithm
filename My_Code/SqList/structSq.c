// 顺序表的存储结构

/* 顺序存储结构 */

typedef struct 
{
    /* data */
    int *elem;      // 动态分配空间的首地址
    int length;     // 线性表当前长度
    int listSize;   // 线性表最大长度
} SqList;
