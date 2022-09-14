#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

