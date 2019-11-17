//
// Created by abuyo on 2019/1/15.
//

#include "SeqStack.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void InitStack(SeqStack *pStack)
{
    pStack->dummy=0;
    pStack->top=-1;
}

ElemType Pop(SeqStack *pStack)
{
    if(pStack->top>=0)
    {
        printf("\n出栈元素为 %d\n", pStack->data[pStack->top]);
        return pStack->data[pStack->top - 1];
    }
    return pStack->dummy;
}

ElemType GetTop(SeqStack *pStack)
{
    if(pStack->top>=0)
        printf("%d", pStack->data[pStack->top]);
        //return pStack->data[pStack->top];
    return pStack->dummy;
}

enum BOOLEAN Push(SeqStack *pStack, ElemType elem)
{
    if(pStack->top>=MAXLEN-1)
        return FALSE;
    pStack->data[++pStack->top]=elem;
    return TRUE;
}

enum BOOLEAN IsEmptyStack(SeqStack *pStack)
{
    if(pStack->top<0)
        return TRUE;
    return FALSE;
}

enum BOOLEAN IsFullStack(SeqStack *pStack)
{
    if(pStack->top==MAXLEN-1)
        return TRUE;
    return FALSE;
}

int LengthStack(SeqStack *pStack)
{
    return pStack->top+1;
}
