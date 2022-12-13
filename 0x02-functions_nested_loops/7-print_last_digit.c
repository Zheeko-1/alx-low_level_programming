#include "main.h"
/**
 *print_last_digit - Entry
 *@a: character
 *Return: 0
 */
int print_last_digit(int a)
{
	int d = a % 10;

	if (d < 0)
		d *= -1;
	_putchar(d + '0');
	return (0);
}
