#pragma once

#define TRUE 1
#define FALSE 0
#define HEAP_LEN 100

typedef char HData;
typedef int (*PriorityComp)(HData d1, d2);

typedef struct _heap
{
	PriorityComp* comp;
	int numOfData;
	HData heapArr[HEAP_LEN];
}Heap;

void HeapInit(Heap* ph, PriorityComp pc);
int HIsEmpty(Heap* ph);

void HInsert(Heap* ph, HData data);
void HDelete(Heap* ph);

