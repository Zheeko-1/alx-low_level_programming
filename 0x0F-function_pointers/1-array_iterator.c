#include <stdio.h>
#include "function_pointer.h"

/**
 *array_iterator - executes function as a parmeter
 *@array: array to iterate over
 *@size: size of the array
 *@action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	return;
	for (i = 0; i < size; i++)
	action(array[i]);
}
