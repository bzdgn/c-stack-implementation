#include <stdio.h>
#include "DataTypes.h"

int main()
{
	Stack * stack = initStack();
	
	push(stack, 15);
	push(stack, 30);
	push(stack, 45);
	
	printStack(stack);
	
	while(1)
	{
		Node * temp = pop(stack);
		
		if(temp == 0)
		{
			break;
		}
		
		printf("Popped element: %2d\n", temp->data);
	}
	
	destroyStack(stack);
}