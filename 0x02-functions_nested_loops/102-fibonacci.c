#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry
 *
 *Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		d = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(',');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
