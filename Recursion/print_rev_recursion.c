#include <stdio.h>

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		;
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
