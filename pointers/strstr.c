#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *tempHaystack;

	if (needle == NULL)
		return (haystack);
	while (*haystack != '\0')
	{
		tempHaystack = haystack;
		while (needle[i] != '\0' && *tempHaystack == needle[i])
		{
			tempHaystack++;
			i++;
		}
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
				
