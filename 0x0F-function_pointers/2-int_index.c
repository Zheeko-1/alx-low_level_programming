#include "function_pointers.h"

/**
 *int_index - function
 *@array: array to search
 *@size: size of array
 *@cmp: pointer to comparing function
 *Return: 0 or -1 when there is no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
