#include "main.h"

/**
 * print_square - prints square
 * @size: the parameter
 */
void print_square(int size)
{
	int a, b;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{	
			for ( b = 0; b < n; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
