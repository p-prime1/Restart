#include <stdio.h>

char *cap_string(char *s)
{
	int i; 
	
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 32 || s[i] == 9 || s[i] == 10
		 || s[i] == 59 || s[i] == 46 || s[i] == 44 
		 || s[i] == 34 || s[i] == 33 || s[i] == 63 
		 || s[i] == 123 || s[i] == 124)
		{
			i++;
			if (s[i] == '\0')
				break;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		else
			i++;
	}
	return (s);
}
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
