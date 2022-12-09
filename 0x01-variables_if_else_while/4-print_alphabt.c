#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		putchar(n);
	}
	putchar('\n');
	return (0);
}
