#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

list_t list_create()
{
	list_t temp = malloc(sizeof(struct list));
	temp->length = 0;
	temp->head = NULL;
	temp->tail = NULL;
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

        // Set up list-head if the list is empty
        if (!endNode){
            list->head = newNode;
        // Else point endNode to newNode
        }else{
            endNode->next = newNode;
        }

        // Append newNode
    	newNode->data = data;
    	newNode->next = NULL;
	newNode->prev = endNode;

        //Set list-tail
        list->tail = newNode;
}

void list_print(list_t list)
{
	struct node *tempPointer = list->head;
	while(tempPointer != NULL){
		printf("%d\n", tempPointer->data);
		tempPointer = tempPointer->next;
	}
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
