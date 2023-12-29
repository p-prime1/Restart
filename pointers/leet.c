#include <stdio.h>

char *leet(char *s)
{
	int c, i;

	char lower_case[] = {97, 101, 111, 116, 108};
	char upper_case[] = {65, 69, 79, 84, 76};
	int code[] = {52, 51, 48, 55, 49};
	c = 0;
	
	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == lower_case[i] || s[c] == upper_case[i])
				s[c] = code[i];
		}
		c++;
	}
	return (s);
}
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
