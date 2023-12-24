#include "main.h"
void push(int stack[], int *top)
{
	int element;
	if (*top == LIMIT - 1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter the element to ne inserted:");
		scanf("%d", &element);
		top++;
		stack[top] = element;
	}
}
