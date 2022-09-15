#include "main.h"

/**
 * print_diagonal - print the diagonal line
 * @n: the parameter
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		if (n == 1)
			_putchar(92);
		
		else
		{
			n = n - 1
			for (i = 0; i < n; i++)
				_putchar(' ');
			_putchar(92);
		}
		_putchar('\n')
	}
}
