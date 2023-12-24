#include "main.h"

int main()
{
	int stack[LIMIT];
	int top, choice;
	printf("This is a test to see the implementation of stacks using arrays:)\n\n");
	top = -1;
	do
	{
		printf("1. INsert\n2. Delete\n3. Display\n4. Exit\n\n");
		printf("Enter your choice:");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				push(stack, &top);
				break;
			case 2:
				pop(stack, &top);
				break;
			case 3:
				display(stack, top);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Sorry, invalid choice!\n");
				break;
		}
	}
	while (choice != 4);
	return (0);
}
	
