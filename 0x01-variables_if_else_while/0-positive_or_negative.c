#include <stdio.h>
#include <time.h>
/**
* main - collect random number from user
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%ls is positive\n", (signed long)n);
	}
	else if (n == 0)
	{
		printf("%ls is zero\n", (signed long)n);
	}
	else
	{
		printf("%ls is negative\n", (signed long)n);
	}
	return (0);
}
