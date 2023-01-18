#include <stdio.h>
#include "3-calc.h"
/*
 *main - program that performs simple operations
 *@argc: numbe rof arguments
 *@argv: array of arguments
 *
 *Return: 0 on success
 */

int main (int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\m");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[3]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
}
