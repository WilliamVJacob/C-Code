#include<stdio.h>
struct node 
{
    int val;
    struct node * next;
} *node_t;

void main()
{
	node_t * head = NULL;
	head = malloc(sizeof(node_t));
	if (head == NULL) 
	{
    		return 1;
	}

	head->val = 1;
	head->next = NULL;
	node_t * head = NULL;
	head = malloc(sizeof(node_t));
	head->val = 1;
	head->next = malloc(sizeof(node_t));
	head->next->val = 2;
	head->next->next = NULL;
}
