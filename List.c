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

void print_list(list_t* plist)
{
	node_t* node = plist->head;

	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n\n");
}