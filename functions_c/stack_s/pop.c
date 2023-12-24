#include "main.h"
void pop(int stack[], int *top)
{
	int element;
	if (*top == -1)
		printf("Stack underflow\n");
	else
	{
		element = stack[top];
		printf("The deleted element is %d, %d\n", stack[top], element);
		top--;
	}
}
