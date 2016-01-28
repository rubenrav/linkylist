#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

list_t list_create()
{
	list_t temp = malloc(sizeof(struct list));
	temp->length = 0;
	temp->head = 0;
	temp->tail = 0;
	return temp;

}

void list_delete(list_t list)
{
	struct node *headPtr = list->head;
	while(headPtr!=NULL){
		struct node *temp = headPtr->next;
		free(headPtr);
		headPtr = temp;
	}

}

void list_insert(list_t list, int index, int data)
{

}

void list_append(list_t list, int data)
{
 	struct node *endNode = list->tail;
	struct node *newNode = malloc(sizeof(struct node));
	
	//if error during memory allocation
	if (newNode == NULL) {
		printf("malloc failed\n");
        	exit(-1);
    	}    

    	newNode->data = data;
    	newNode->next = endNode;
	newNode->prev = NULL;

    	while (endNode->next) {
        	endNode = endNode->next;
    	}    
    	endNode->prev = newNode;
}

void list_print(list_t list)
{
	struct node *tempPointer = list->tail;
	while(tempPointer != NULL){
		printf("%s", tempPointer->data);
		tempPointer = tempPointer->next;
	}
	printf("\n");
}

long list_sum(list_t list)
{

}

int list_get(list_t list, int index)
{

}

int list_extract(list_t list, int index)
{
	return 1;
}
