/**
* union.c
* @author bulbasaur
* @description 
实现两个线性表 A、B 的并集操作，是的集合 A = A U B
* @created 2021-02-13T16:36:18.657Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-13T16:52:00.135Z+08:00
*/

typedef int ElemType; 

void unionL(List * La, list Lb) {
    int La_len, Lb_len, i;
    
    ElemType e;
    La_len = ListLength(*La);
    Lb_len = ListLength(Lb);

    for ( i = 0; i <= Lb_len; i++)
    {
        /* code */
        GetElem(Lb, i, &e);
        if (!LocateElem(*La, e))
        {
            /* code */
            ListInsert(La, ++La_len, e);
        }
        
    }
    
}