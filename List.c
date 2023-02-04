#include <stdio.h>

#include "List.h"

void init_list(list_t* plist)
{
	(plist->head) = NULL;
	(plist->tail) = NULL;
}

void insert_head(list_t* plist, node_t* node)
{
	if (plist->head == NULL)
	{
		node->next = NULL;

		plist->head = node;
		plist->tail = node;
	}
	else
	{
		node->next = plist->head;
		plist->head = node;
	}
}

void insert_node(list_t* plist, node_t* node, node_t* prev_node)
{
	if (plist->head == NULL)
	{
		node->next = NULL;
		plist->head = node;
		plist->tail = node;
	}
	else
	{
		node_t* p = plist->head;
		node_t* q = plist->head;


		while (p != NULL && p != prev_node)
		{
			q = p;
			p = p->next;
		}

		if (p == q)
		{
			insert_head(plist, node);
		}
		else
		{
			q->next = node;
			node->next = prev_node;

		}
				
	}
	
}

void delete_head(list_t* plist)
{
	list_t* deleted_node;
	if (plist->head != NULL)
	{
		deleted_node = plist->head;
		plist->head = plist->head->next;
		free(deleted_node);

		if (plist->head == NULL)
		{
			plist->tail = NULL;
		}
	}
}

void delete_node(list_t* plist)
{
	
}

void print_list(list_t* plist)
{
	node_t*node=plist->head;
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n\n");
}