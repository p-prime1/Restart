#include <stdio.h>

void main(void)
{
	int i;
	
	i = 0;
	while (i < 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar(9 + '0');
}
