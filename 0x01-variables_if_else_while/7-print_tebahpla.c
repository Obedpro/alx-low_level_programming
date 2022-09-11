#include <stdio.h>

/**
* main - prints alphabet in inverse
*
* Description: using the main function
* this program prints lowercase alphabet in reverse
* Return: 0
*/
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
		putchar(d);
	putchar('\n');
	return (0);
}
