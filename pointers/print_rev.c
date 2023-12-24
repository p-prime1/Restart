#include <stdio.h>

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
