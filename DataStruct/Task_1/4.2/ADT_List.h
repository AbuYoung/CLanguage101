//
// Created by abuyo on 2019/1/16.
//

#ifndef PRC_ADT_LIST_H
#define PRC_ADT_LIST_H

#include "Poly.h"

typedef struct Node{
    ElemType data;
    struct Node *next;
}*List;

List CreateNullList();
List FindInListByPosition(List list, int i);
List LocateInList(List list, ElemType *x);

enum BOOLEAN InsertInListAfter(List list, ElemType *newElem, ElemType *elem);
enum BOOLEAN InsertInListBefore(List list, ElemType *newElem, ElemType *elem);
enum BOOLEAN InsertInList(List list, int pos, ElemType *elem);
enum BOOLEAN DeleteInList(List list, int i);

int IndexInList(List list, ElemType *elem);

enum BOOLEAN GetElemInList(List list, int i, ElemType *pElem);
int LengthInList(List list);

void InitList(List list);
void DeleteList(List list);

enum BOOLEAN TravelList(List list, enum BOOLEAN f(ElemType *elem));
enum BOOLEAN ClearList(List list);

int equals(ElemType *pa, ElemType *pb);
enum BOOLEAN assign(ElemType *pa, ElemType *pb);
void DeleteElem(ElemType *pEle);

#endif //PRC_ADT_LIST_H
