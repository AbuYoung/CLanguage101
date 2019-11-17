//
// Created by abuyo on 2019/1/15.
//

#include "SeqStack.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void initStack(SeqStack *pStack);
void pushElem(SeqStack *pStack);
void popElem(SeqStack *pStack);
void getTop(SeqStack *pStack);

int main(){
    SeqStack pStack;
    InitStack(&pStack);
    int idx;
    while(1){
        system("CLS");
        printf("顺序栈基本操作实验\n");
        printf("1.栈初始化 2.元素入栈\n");
        printf("3.元素出栈 4.栈的状态\n");
        printf("5.退出\n");
        idx=getch();
        switch (idx)
        {
            case '1':
                initStack(&pStack);
                break;
            case '2':
                pushElem(&pStack);
                break;
            case '3':
                popElem(&pStack);
                break;
            case '4':
                getTop(&pStack);
                break;
            case '5':
                exit(0);
            default:
                printf("非法输入，请输入正确数字\n");
                getch();
        }
    }
}

void initStack(SeqStack *pStack)
{
    InitStack(pStack);
}

void pushElem(SeqStack *pStack)
{
    ElemType ele;
    printf("\n请输入想压入的元素\n");
    scanf("%d", &ele);
    if(Push(pStack, ele)==FALSE)
        printf("\n插入失败，栈满\n");
    else
        printf("\n插入成功\n");
    printf("按任意键继续\n");
    getch();
}

void popElem(SeqStack *pStack)
{
    if(IsEmptyStack(pStack)==FALSE)
        Pop(pStack);
    else
        printf("\n此栈为空\n");
    printf("按任意键继续\n");
    getch();
}

void getTop(SeqStack *pStack)
{
    if(IsEmptyStack(pStack)==TRUE)
        printf("\n此栈为空\n");
    else if(IsFullStack(pStack)==TRUE)
    {
        printf("\n此栈已满\n");
        printf("栈顶元素为：");
        GetTop(pStack);
    } else {
        printf("\n此栈未满\n");
        printf("栈顶元素为： ");
        GetTop(pStack);
    }
    printf("\n按任意键继续\n");
    getch();
}