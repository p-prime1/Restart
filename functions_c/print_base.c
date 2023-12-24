#include <stdio.h>

void main(void)
{
	int i,j;
	
	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	j = 'a';
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
}
