#include <stdio.h>
int main(void)
{
	int i;
	i = 'z';

	while(i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
