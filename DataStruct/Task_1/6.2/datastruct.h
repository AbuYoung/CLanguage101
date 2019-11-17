//
// Created by abuyo on 2019/1/16.
//

#ifndef PRC_DATASTRUCT_H
#define PRC_DATASTRUCT_H

#define KEYTYPE int
#define MAXSIZE 100

typedef struct 
{
    KEYTYPE key;
}SSELEMENT;

typedef struct 
{
    SSELEMENT r[MAXSIZE];
    int len;
}SSTABLE;

#endif //PRC_DATASTRUCT_H
