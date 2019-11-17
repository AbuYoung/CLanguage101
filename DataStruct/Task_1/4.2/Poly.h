//
// Created by abuyo on 2019/1/16.
//

#ifndef PRC_POLY_H
#define PRC_POLY_H

enum BOOLEAN {FALSE,TRUE};
typedef struct {
    int exp;
    int ceof;
}ElemType;

int equals(ElemType *pa, ElemType *pb);
enum BOOLEAN assign(ElemType *pa, ElemType *pb);
void DeleteElem(ElemType *pEle);
#endif //PRC_POLY_H
