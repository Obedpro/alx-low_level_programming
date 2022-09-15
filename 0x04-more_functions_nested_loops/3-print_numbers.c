#include "main.h"

/**
 * print_numbers - function that prints numbers 0 to 9
 * Description: using  print_numbers
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
