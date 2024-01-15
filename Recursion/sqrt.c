#include <stdio.h>

int _sqrt(int num)
{
	int low, high, mid, mid_squared;
	if (num < 0)
		return -1;
	if (num <= 1)
		return num;

	low = 1;
	high = num;

	while (low <= high)
	{
		mid = (low + high) / 2;
		mid_squared = mid * mid;
	}
	if (mid_squared == num)
		low = mid + 1;
	else
		high = mid -1;
	return (high);
}
int main(void)
{
	printf("%d\n,%d\n,%d\n",_sqrt(10), _sqrt(25), _sqrt(36));
	return (0);
}
