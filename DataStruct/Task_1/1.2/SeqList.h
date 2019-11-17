//
// Created by abuyo on 2019/1/15.
//

#ifndef PRC_SEQLIST_H
#define PRC_SEQLIST_H

#define MAXSIZE 100

enum BOOLEAN {FALSE,TRUE};
typedef int ElemType;
typedef struct {
    ElemType vec[MAXSIZE];
    int len;
}SequenList;
/***顺序链表基本操作***/
enum BOOLEAN InsertInSeqList(SequenList *L, int i, ElemType x);
enum BOOLEAN DeleteFromSeqList(SequenList *L, int i);
int FindInSeqList(SequenList *L, ElemType x);

#endif //PRC_SEQLIST_H
