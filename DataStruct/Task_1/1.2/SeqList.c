//
// Created by abuyo on 2019/1/15.
//

#include "SeqList.h"
#include <stdio.h>

enum BOOLEAN InsertInSeqList(SequenList *L, int i, ElemType x) {
	int j;
	if (L->len >= MAXSIZE) {
		printf("线性表溢出!\n");
		return FALSE;
	}
	if (i < 1 || i > L->len + 1) {
		printf("插入位置错误！\n");
		return FALSE;
	}
	for (j = L->len - 1; j >= i - 1; j--) {
		L->vec[j + 1] = L->vec[j];
	}
	L->vec[i - 1] = x;
	L->len++;
	return TRUE;
}

enum BOOLEAN DeleteFromSeqList(SequenList *L, int i) {
	if (i < 1 || i > L->len) {
		return FALSE;
	}
	L->len--;
	i--;
	while (i <= L->len) {
		L->vec[i] = L->vec[i + 1];
		i++;
	}
	return TRUE;
}

int FindInSeqList(SequenList *L, ElemType x) {
	int pos;
	for (pos = 0; pos, L->len; pos++) {
		if (L->vec[pos] == x)
			break;
		return pos == L->len ?: pos + 1;
	}
}