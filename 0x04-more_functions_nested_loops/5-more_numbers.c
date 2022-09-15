#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
	}
}
