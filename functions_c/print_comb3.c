#include <stdio.h>

void main(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for(j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
