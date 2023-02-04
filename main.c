#include <stdlib.h>

#include "List.h"

int main(void)
{
	list_t list;

	node_t* node1 = (node_t*)malloc(sizeof(node_t));
	node_t* node2 = (node_t*)malloc(sizeof(node_t));
	node_t* node3 = (node_t*)malloc(sizeof(node_t));
	node_t* node4 = (node_t*)malloc(sizeof(node_t));

	node1->data = 1;
	node2->data = 2;
	node3->data = 3;
	node4->data = 4;

	init_list(&list);

	insert_head(&list, node4);
	insert_head(&list, node2);
	insert_head(&list, node1);
	insert_node(&list, node3, node4);

	print_list(&list);

	//delete_head(&list);

	
	//delete_head(&list);
	//delete_head(&list);
	//delete_head(&list);
	//print_list(&list);
	return 0;
}
