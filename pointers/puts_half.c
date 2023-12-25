#include <stdio.h>

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
		while(str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (i - 1) / 2;
		while (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
	}
	putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
