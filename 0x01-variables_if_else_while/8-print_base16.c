#include <stdio.h>

/**
* main - prints numbers of base 16 in lowercase
*
* Description: using the main function
* This program prints all the numbers of base 16 in lowercase
* Return: 0
*/
int main(void)
{
	int a;
	char i;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
		putchar('\n');
	return (0);
}
