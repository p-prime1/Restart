#include <stdio.h>

void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = (n - 1);
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
}
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
