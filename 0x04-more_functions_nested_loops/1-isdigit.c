#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @n: the paramter in the _isdigit function
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
