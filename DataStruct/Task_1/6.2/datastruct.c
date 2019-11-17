//
// Created by abuyo on 2019/1/16.
//

#include "datastruct.h"
#include <stdio.h>

int seq_search(KEYTYPE k, SSTABLE *st)
{
    int j;
    j=st->len;
    st->r[0].key=k;
    while (st->r[j].key!=k)
        j--;
    return j;
}

void main()
{
    SSTABLE a;
    int i,k;
    printf("请输入顺序表元素，元素为整型量，用空格分开，-99为结束标志：");
    k=1;
    scanf("%d",&i);
    while(i!=-99)
    {
        a.r[k++].key=i;
        scanf("%d",&i);
    }
    a.len=k-1;
    printf("\n输入顺序表元素列表显示：");
    for(i=1; i<=a.len; i++)
        printf("%d ",a.r[i].key);
    printf("\n");
    printf("\n请输入待查元素关键字：");
    scanf("%d", &i);
    k=seq_search(i, &a);
    if(k==0)
        printf("表中待查元素不存在\n\n");
    else
        printf("表中待查元素存在\n\n");
}