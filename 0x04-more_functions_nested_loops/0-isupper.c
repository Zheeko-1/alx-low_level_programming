#include "main.h"
/**
 *_isupper - Entry point of code
 *@c: character
 *Return: 1 or 0
 */
int _isupper(int c)
{
	for ((c >= 'a'; c <= 'z'; c++) && (c >= 'A'; c <= 'Z'; c++))
	{
		if (c == C)
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
