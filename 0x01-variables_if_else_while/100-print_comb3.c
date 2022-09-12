#include <stdio.h>

/**
* main - prints combinations of two digits
*
* Description: using the main function
* this program prints all possible different combinations of two digits.
* Return: 0
*/
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{
			if (j < i)
			{
				putchar('0' + i);
				putchar(j + '0');
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
