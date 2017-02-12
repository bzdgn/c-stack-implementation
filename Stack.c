#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Node * initNode(int data)
{
	Node * n = malloc(sizeof(Node));
	
	n->data = data;
	n->next = 0;
	
	return n;
}

void destroyNode(Node *node)
{
	node->next = 0;
	
	free(node);
}

Stack * initStack()
{
	Stack * s = malloc(sizeof(Stack));
	
	s->head = 0;
	s->tail = 0;
	s->size = 0;
	
	return s;
}

int size(Stack *stack)
{
	if(stack == 0)
	{
		return -1;
	}
	else
	{
		return stack->size;
	}
}

int isEmpty(Stack *stack)
{
	return size(stack) == 0;
}

void destroyStack(Stack *stack)
{
	if(isEmpty(stack))
	{
		free(stack);
	}
	else
	{
		Node * curr = stack->head;
		while(curr != 0)
		{
			Node * temp = curr;
			curr = curr->next;
			
			free(temp);
		}
	}
}

void push(Stack *stack, int value)
{
	Node * newNode = initNode(value);
	
	if(isEmpty(stack))
	{
		newNode->next = 0;
		
		stack->head = newNode;
		stack->tail = newNode;
	}
	else
	{
		newNode->next = stack->head;
		stack->head = newNode;
	}
	
	stack->size++;
}

Node * pop(Stack *stack)
{
	if(isEmpty(stack))
	{
		return 0;
	}
	else
	{
		Node * result = stack->head;
		
		stack->head = stack->head->next;
		
		stack->size--;
		
		return result;
	}
}

void printStack(Stack *stack)
{
	printf("Stack: ");
	
	if(isEmpty(stack))
	{
		printf("is empty!\n");
	}
	else
	{
		for(Node * temp = stack->head; temp != 0; temp = temp->next)
		{
			printf("%2d ", temp->data);
		}
		
		printf("\n");
	}
}