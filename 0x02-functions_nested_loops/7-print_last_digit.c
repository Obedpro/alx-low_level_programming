#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the int that is using in the function
 *
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int j = n % 10;

	if (j < 0)
	{
		j *= -1;
	}
	_putchar(j + '0');
	return (j);
}

		
