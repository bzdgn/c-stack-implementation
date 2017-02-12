#include "DataTypes.h"

Node * initNode(int data);

void destroyNode(Node *node);

Stack * initStack();

int size(Stack *stack);

int isEmpty(Stack *stack);

void destroyStack(Stack *stack);

void push(Stack *stack, int value);

Node * pop(Stack *stack);

void printStack(Stack *stack);