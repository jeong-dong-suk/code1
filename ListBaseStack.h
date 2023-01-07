#pragma once

#define TRUE  1
#define FALSE 0

typedef int Data;
typedef struct _node
{
	Data data;
	struct _node* next;

}Node;

typedef struct _listStack
{
	Node* head;
}ListStack;

typedef ListStack Stack;

void StackInit(Stack* pstack);
int SIsEmpty(Stack* pstack);

void SPush(Stack* pstack, Data data);
void SPop(Stack* pstack);
void SPeek(Stack* pstack);