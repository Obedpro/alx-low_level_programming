#include <stdio.h>

/**
Â* main - prints the alphabet in lowercase et uppercase
*
* Description: using the main fucntion
*
* return: 0
*/

int main(void)
{
	char c;
	char b;

	for(c = 'a'; c <= 'z'; c++)
		putchar(c);
	for(b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
