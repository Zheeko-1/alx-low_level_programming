#include <stdio.h>
#include "3-calc.h"

/**
 *op_add - add function
 *@a: first input
 *@b: second input
 *Return: sum of inputs
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtract function
 *@a: first input
 *@b: second input
 *Return: difference of inputs
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication function
 *@a: first input
 *@b: second input
 *Return: multiplication of inputs
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division function
 *@a: first input
 *@b: second input
 *Return: division of inputs
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - modulus function
 *@a: first input
 *@b: second input
 *Return: modulus of inputs
 */

int op_mod(int a, int b)
{
	return (a % b);
}
