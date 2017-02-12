typedef struct 
{
	int data;
	struct Node * next;
} Node;

typedef struct
{
	int size;
	Node * head;
	Node * tail;
} Stack;
