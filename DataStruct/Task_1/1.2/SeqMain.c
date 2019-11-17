//
// Created by abuyo on 2019/1/15.
//
#include "SeqList.h"
#include <conio.h>
#include <curses.h>
#include <stdio.h>
#include <windows.h>

void insertElem(SequenList *psList);
void deleteByPosition(SequenList *psList);
void findElem(SequenList *psList);
void deleteElem(SequenList *psList);
void displayAll(SequenList *psList);
void displayLength(SequenList *psList);
void clear(SequenList *psList);

int main() {
	SequenList seqList;
	int idx;
	seqList.len = 0;
	while (1) {
		system("CLS");
		printf("线性表基本操作实验\n");
		printf("1.插入一个新元素 2.删除指定位置的元素\n");
		printf("3.查找指定值的元素 4.删除指定值的元素\n");
		printf("5.显示表中所有元素 6.显示表长\n");
		printf("7.清空线性表 8.退出\n");
		idx = getch();
		switch (idx) {
		case '1':
			insertElem(&seqList);
			break;
		case '2':
			deleteByPosition(&seqList);
			break;
		case '3':
			findElem(&seqList);
			break;
		case '4':
			deleteElem(&seqList);
			break;
		case '5':
			displayAll(&seqList);
			break;
		case '6':
			displayLength(&seqList);
			break;
		case '7':
			clear(&seqList);
			break;
		case '8':
			exit(0);
		default:
			printf("非法输入，请输入正确数字\n");
			getch();
		}
	}
}

void insertElem(SequenList *psList) {
	int pos;
	ElemType data;
	printf("\n请输入插入的元素及位置，以空格分割位置与元素的值:");
	scanf("%d%d", &pos, &data);
	if (InsertInSeqList(psList, pos, data) == TRUE)
		printf("\n插入成功\n");
	else
		printf("\n插入位置错误\n");
	printf("按任意键继续\n");
	getch();
}

void deleteByPosition(SequenList *psList) {
	int pos;
	printf("\n请输入欲删除元素的位置：");
	scanf("%d", &pos);
	if (DeleteFromSeqList(psList, pos) == TRUE)
		printf("\n删除成功\n");
	else
		printf("\n删除位置错误\n");
	printf("按任意键继续");
	getch();
}

void findElem(SequenList *psList) {
	int pos;
	ElemType data;
	printf("\n请输入欲查找的元素：");
	scanf("%d", &data);
	if ((pos = FindInSeqList(psList, pos)) > 0)
		printf("\n元素%d是第%d个元素。\n", data, pos);
	else
		printf("\n元素%d不在线性表中\n", data);
	printf("按任意键继续");
	getch();
}

void deleteElem(SequenList *psList) {
	int pos;
	ElemType data;
	printf("\n请输入想删除的元素：");
	scanf("%d", &data);
	pos = FindInSeqList(psList, data);
	if (DeleteFromSeqList(psList, pos) == TRUE)
		printf("\n删除元素%d成功！\n", data);
	else
		printf("\n删除元素%d失败！\n", data);
	printf("按任意键继续");
	getch();
}

void displayAll(SequenList *psList) {
	int pos;
	printf("\n线性表中的元素如下\n");
	for (pos = 0; pos < psList->len; pos++)
		printf("%5d", psList->vec[pos]);
	printf("\n按任意键继续");
	getch();
}

void displayLength(SequenList *psList) {
	printf("\n线性表中的长度是%d\n", psList->len);
	printf("按任意键继续");
	getch();
}

void clear(SequenList *psList) {
	psList->len = 0;
	printf("线性表以清空，按任意键继续");
	getch();
}
