#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @n: the paramter of the _isdigit
 * Return: 0 and 1
 */
int _isdigit(int n)
{
	if (n >= 0 && n <= 9)
	{
		return (1);
	}
	else
		return (0);
}
