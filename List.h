#pragma once

#define NULL ((void*)0)
#define TRUE 1
#define FALSE 0
#define LIST_LEN 100

typedef struct node
{
	int* data;
	struct Node* next;
} node_t;

typedef struct list
{
	node_t* head;
	node_t* tail;
} list_t;

void init_list(list_t* plist);
void insert_head(list_t* plist, node_t* node);
void insert_tail(list_t* plist, node_t* node);
void delete_head(list_t* plist);
void delete_tail(list_t* plist);
void print_list(list_t* plist);