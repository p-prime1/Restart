#include <stdio.h>

void puts2(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		putchar(str[i]);
		i+=2;
	}
	putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
