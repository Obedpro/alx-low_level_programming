#include <stdio.h>

/**
* main prints alphabet in inverse
*
* Description: using the main function
* this program prints lowercase alphabet in reverse
* Return: 0
*/
int main(void)
{
	char d;

	for (d = 'a'; d >= 'z'; d--)
		putchar(d);
	putchar('\n');
	return (0);
}
