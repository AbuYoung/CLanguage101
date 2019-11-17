//
// Created by abuyo on 2019/1/16.
//

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

#define MAXSIZE 50
#define KEYTYPE int

typedef struct {
    KEYTYPE key;
}RECNODE;

int MakeList(RECNODE *r)
{
    int j,k;
    printf("\n\n输入初始数据（每个数据以空格隔开，-1结束）：");
    k=0;
    scanf("%d",&j);
    while (j!=-1)
    {
        k++,r[k].key=j;
        scanf("%d",&j);
    }
    return k;
}

int UndealoutList(RECNODE *r, int n)
{
    int i;
    printf("\n未排序前的数据：");
    for(i=0; i<n; i++)
        printf(" %d",r[i+1].key);
    printf("\n\n");
}

int DealoutList(RECNODE *r, int n)
{
    int i;
    printf("\n\n排序后的数据：");
    for(i=0; i<n; i++)
        printf(" %d",r[i+1].key);
    printf("\n\n");
    getch();
}

void InsertSort(RECNODE *r, int n)
{
    int i,j;
    for(i=2; i<=n; i++)
    {
        r[0]=r[i];
        j=i-1;
        while(r[0].key<r[j].key)
        {
            r[j+1]=r[j];
            j--;
        }
        r[j+1]=r[0];
    }
}

void BubbleSort(RECNODE *r, int n)
{
    int i,j;
    RECNODE temp;
    for(i=1; i<n; i++)
        for(j=n-1; j>=i; j--)
            if(r[j+1].key<r[j].key)
            {
                temp=r[j+1];
                r[j+1]=r[j];
                r[j]=temp;
            }
}

int Partition(RECNODE *r, int *low, int *high)
{
    int i,j;
    RECNODE temp;
    i=*low;
    j=*high;
    temp=r[i];
    do
    {
        while(r[j].key>=temp.key && (i<j))
            j--;
        if(i<j)
            r[i++]=r[j];
        while((r[i].key<=temp.key) && (i<j))
            i++;
        if(i<j)
            r[j--]=r[i];
    }while(i!=j);
    r[i].key=temp.key;
    return i;
}

void QuickSort(RECNODE *r, int start, int end)
{
    int i;
    if(start<end)
    {
        i=Partition(r, &start, &end);
        QuickSort(r, start, i-1);
        QuickSort(r, i+1, end);
    }
}

void SeleSort(RECNODE *r, int n)
{
    int i,j,k;
    RECNODE temp;
    for(i=1; i<n; i++)
    {
        k=i;
        for(j=i+1; j<=n; j++)
            if(r[j].key<r[k].key)
                k=j;
            if(k!=i)
            {
                temp=r[i];
                r[i]=r[k];
                r[k]=temp;
            }
    }
}

void Shift(RECNODE *r, int i, int m)
{
    int j;
    RECNODE temp;
    temp=r[i];
    j=2*i;
    while(j<=m)
    {
        if(j<m && (r[j].key<r[j+1].key))
            j++;
        if(temp.key<r[j].key)
        {
            r[i]=r[j];
            i=j;
            j=2*i;
        }
        else
            break;
    }
    r[i]=temp;
}

void HeapSort(RECNODE *r, int n)
{
    int i;
    RECNODE temp;
    for(i=n/2; i>=1; i--)
        Shift(r, i, n);
    for(i=n; i>=2; i--)
    {
        temp=r[1];
        r[1]=r[i];
        r[i]=temp;
        Shift(r, 1, i-1);
    }
}

void Merge(RECNODE *r, int low, int m, int high)
{
    RECNODE r1[MAXSIZE];
    int i,j,k;
    i=low;
    j=m+1;
    k=0;
    while(i<=m && j<=high)
        if(r[i].key<=r[j].key)
        {
            r1[k]=r[i];
            i++;
            k++;
        }
    else
        {
        r1[k]=r[j];
        j++;
        k++;
        }
    while(i<=m)
    {
        r1[k]=r[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        r1[k]=r[j];
        j++;
        k++;
    }
    for(i=low, k=0; i<=high; i++,k++)
        r[i]=r1[k];
}

void MergeOne(RECNODE *r, int lenth, int n)
{
    int i=0;
    while(i+ 2*lenth-1<n)
    {
        Merge(r, i, i+lenth-1, i+2*lenth-1);
        i=i+2*lenth;
    }
    if(i+lenth-1<n-1)
        Merge(r, i, i+lenth-1, n-1);
}

void MergeSort(RECNODE *r, int n)
{
    int lenth=1;
    while(lenth<n)
    {
        MergeOne(r, lenth, n);
        lenth=2*lenth;
    }
}

int main()
{
    RECNODE a[MAXSIZE];
    int len, b;
    int loop=1;
    while(loop)
    {
        system("CLS");
        printf("\n\n各种排序算法及操作选项如下：\n\n");
        printf("  0--退出\n");
        printf("  1--直接插入排序\n");
        printf("  2--冒泡排序\n");
        printf("  3--快速排序\n");
        printf("  4--直接选择排序\n");
        printf("  5--堆排序\n");
        printf("  6--二路归并排序\n");
        printf("\n\n  请在上述序号中选择一个并输入：");
        b=getch();
        switch (b) {
            case '0':
                loop = 0;
                break;
            case '1':
                len = MakeList(a);
                UndealoutList(a, len);
                InsertSort(a, len);
                DealoutList(a, len);
                break;
            case '2':
                len = MakeList(a);
                UndealoutList(a, len);
                BubbleSort(a, len);
                DealoutList(a, len);
                break;
            case '3':
                len = MakeList(a);
                UndealoutList(a, len);
                QuickSort(a, 1, len);
                DealoutList(a, len);
                break;
            case '4':
                len = MakeList(a);
                UndealoutList(a, len);
                SeleSort(a, len);
                DealoutList(a, len);
                break;
            case '5':
                len = MakeList(a);
                UndealoutList(a, len);
                HeapSort(a, len);
                DealoutList(a, len);
                break;
            case '6':
                len = MakeList(a);
                UndealoutList(a, len);
                MergeSort(a, len);
                DealoutList(a, len);
                break;
            default:
                printf("请输入正确的数字");
                break;
        }
    }
}