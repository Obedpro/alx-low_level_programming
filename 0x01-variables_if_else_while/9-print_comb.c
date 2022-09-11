#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers.
* Description: using the main functio
* This program prints all single-digit numbers separated by ,
* Return: 0
*/
int main(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('$');
	return (0);
}
