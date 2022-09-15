#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @n: the parameter in the _isupper
 * Return: 0 and 1
 */
int _isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
