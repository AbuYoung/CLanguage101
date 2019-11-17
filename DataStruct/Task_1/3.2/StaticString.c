//
// Created by abuyo on 2019/1/16.
//

#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define OK      1
#define TRUE    1
#define FALSE   0

typedef int     ElemType;
typedef int     Status;

#define MaxSize 255
typedef unsigned char   SString[MaxSize+1];

//初始化  必须初始化  否则判空无法完成
Status InitStr(SString S)
{
    S[0] = 0;
    return OK;
}

//创建
Status CreateStr(SString S, char chars[])
{
    int i;
    for (i=0; chars[i]!='\0' && i+1<MaxSize; ++i)
        S[i+1] = chars[i];
    S[0] = i;
    printf("按任意键继续\n");
    getch();
    return OK;
}

//输出
void DispStr(SString S)
{
    int i;
    for (i=1; i<=S[0]; ++i)
        putchar(S[i]);
    printf("\n字符串为");
    putchar('\n');
    printf("按任意键继续\n");
    getch();
}

//串判空
Status StrEmpty(SString S)
{
    if (0 == S[0])
        return TRUE;
    else
        return FALSE;
}

//求串长
int StrLength(SString S)
{
    printf("按任意键继续\n");
    getch();
    return S[0];
}

//串清空
Status ClearStr(SString S)
{
    S[0] = 0;
    printf("按任意键继续\n");
    getch();
    return OK;
}

//串连接
Status Concat(SString T, SString S1, SString S2)
{
    int i, k;
    for (i=1; i<=MaxSize && i<=S1[0]; ++i)
        T[i] = S1[i];

    k = i-1;
    T[0] = k;

    for (i=1; i+k<=MaxSize && i<=S2[0]; ++i)
        T[i+k] = S2[i];

    T[0] += i-1;
    return OK;
}

void GetNext(SString T, int next[])
{
    int i = 1;
    int j = 0;
    next[1] = 0;
    while (i < T[0])
    {
        if (j==0 || T[i]==T[j])
        {
            ++i;
            ++j;
            if (T[i] != T[j])
                next[i] = j;
            else
                next[i] = next[j];
        }
        else
            j = next[j];
    }
}

Status Index_KMP(SString T, SString S, int pos)
{
    int i = pos;
    int j = 1;
    int next[MaxSize];

    GetNext(S, next);

    while (i<=T[0] && j<=S[0])
    {
        if (j==0 || T[i]==S[j])
        {
            ++i;
            ++j;
        }
        else
            j = next[j];
    }

    if (j>S[0])
        return i-S[0];
    else
        return 0;

}

int main(void)
{
    SString T, S1, S2;
    int i, loop=1, idx;
    InitStr(T);
    InitStr(S1);
    InitStr(S2);
    /*CreateStr(S1, "ABCDEFGH");
    CreateStr(S2, "GH");
    i = Index_KMP(S1, S2, 3);
    printf("%d\n", i);*/
    while(loop)
    {
        system("CLS");
        printf("串的定长顺序存储\n");
        printf("1.输入字符串 2.求串的长度\n");
        printf("3.输入第二个串 4.合并串\n");
        printf("5.输出串 6.清空串\n");
        printf("7.退出\n");
        printf("输入数字：");
        idx=getch();
        switch(idx)
        {
            case '1':
                printf("\n输入字符串: ");
                char s1;
                scanf("%s", &s1);
                CreateStr(S1, &s1);
                break;
            case '2':
                StrLength(S1);
                break;
            case '3':
                printf("\n输入字符串：");
                char s2;
                scanf("%s", &s2);
                CreateStr(S2, &s2);
                break;
            case '4':
                Concat(T, S1, S2);
                DispStr(T);
                break;
            case '5':
                if(StrEmpty(S2)==1)
                    if(StrEmpty(S1)==1)
                        printf("字符串为空\n");
                    else
                        DispStr(S1);
                else
                {
                    DispStr(S1);
                    DispStr(S2);
                }
                break;
            case '6':
                ClearStr(S1);
                ClearStr(S2);
                break;
            case '7':
                exit(0);
            default:
                printf("非法输入");
                getch();
        }
        if(idx==7)
            loop=0;
    }

    return 0;
}
