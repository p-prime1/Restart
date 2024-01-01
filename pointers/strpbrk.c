#include <stdio.h>

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f = "[]{}()";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", (t == NULL ? "nil" : t));
	return (0);
}
