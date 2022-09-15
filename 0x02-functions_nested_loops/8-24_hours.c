#include "main.h"

/**
 * jack_bauer - prints every minute of rhe day
 * n from 00:00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int i, p;
	int j, k;

	for (i = 0; i <= 23; i++)
	{
		for (p = 0; p <= 59; p++)
		{
			j = p % 10;
			k = i % 10;
			_putchar(i / 10 + '0');
			_putchar(k + '0');
			_putchar(':');
			_putchar(p / 10 + '0');
			_putchar(j + '0');
			_putchar('\n');
		}
		p = 0;
	}
}
