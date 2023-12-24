#include "main.h"
void display(int stack[], int top)
{	
	if (top == -1)
		printf("Stack Underflow\n");
	else if (top > 0)
	{
		while (top >= 0)
		{
			printf("%d\n", stack[top]);
		}
	}
}
