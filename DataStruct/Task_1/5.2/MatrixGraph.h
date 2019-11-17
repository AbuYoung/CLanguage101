//
// Created by abuyo on 2019/1/16.
//

#ifndef PRC_MATRIXGRAPH_H
#define PRC_MATRIXGRAPH_H

#include "ADT_List.h"

typedef enum {FALSE1,TRUE1} BOOL;
typedef char VexType[11];
typedef struct
{
    VexType vex;
    BOOL visite;
}VEX;
typedef struct
{
    int n;
    VEX *vexs;
    int *matrix;
}MatrixGraph;

List split(char *str, char ch);

BOOL enterGraph(MatrixGraph *graph);
void outGraph(MatrixGraph *graph);
int firstadj(MatrixGraph *graph, int vex);
int nextadj(MatrixGraph *graph, int i, int vex);

void DepathTravel(MatrixGraph *graph, int i, void (*f)(VEX *pVex));
void widthTravel(MatrixGraph *graph, void (*f)(VEX *pVex));
void WidthTravel(MatrixGraph *graph, int i, void (*f)(VEX *pVex));

void DeleteGraph(MatrixGraph *graph);
void InitGraph(MatrixGraph *graph);

BOOL InsertVex(MatrixGraph *graph, char vex[]);
BOOL InserArc(MatrixGraph *graph, char tail[], char head[], int weight);
BOOL DeleteVex(MatrixGraph *graph, char vex[]);
BOOL DeleteArc(MatrixGraph *graph, char tail[], char head[]);

int indegree(MatrixGraph *graph, char vex[]);
int outdegree(MatrixGraph *graph, char vex[]);
void depathTravel(MatrixGraph *graph, coid (*f)(VEX *pVex));

#endif //PRC_MATRIXGRAPH_H
