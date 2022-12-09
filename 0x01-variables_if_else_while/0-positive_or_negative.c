#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - prints random number and tell if zero,positive or negative
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%lld is positive\n", (signed long)n);
	}
	else if (n == 0)
	{
		printf("%lld is zero\n", (signed long)n);
	}
	else
	{
		printf("%lld is negative\n", (signed long)n);
	}
	return (0);
}
