//
// Created by abuyo on 2019/1/15.
//

#ifndef PRC_SEQSTACK_H
#define PRC_SEQSTACK_H

#define MAXLEN 100

typedef int ElemType;
enum BOOLEAN {FALSE,TRUE};
typedef struct {
    ElemType data[MAXLEN];
    int top;
    ElemType dummy;
}SeqStack;

void InitStack(SeqStack *pStack);
ElemType Pop(SeqStack *pStack);
ElemType GetTop(SeqStack *pStack);

enum BOOLEAN Push(SeqStack *pStack, ElemType elem);
enum BOOLEAN IsEmptyStack(SeqStack *pStack);
enum BOOLEAN IsFullStack(SeqStack *pStack);

#endif //PRC_SEQSTACK_H
