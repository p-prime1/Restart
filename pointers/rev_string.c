#include <stdio.h>

void rev_string(char *s)
{
	char temp[10];
	int i,j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		temp[j] = s[i];
		i++;
		j++;
	}
	j = j + 1;
	i = 0;
	temp[j] = '\0';
	while (j >= 0)
	{
		s[i] = temp[j];
		j--;
		i++;
	}
	s[i + 1] = '\0';
}
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
