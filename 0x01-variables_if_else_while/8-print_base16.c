#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry
 * Return: 0
*/
int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (b = 'a'; b <= 'f'; a++)
		putchar(b);

	putchar('\n');
	return (0);
}
