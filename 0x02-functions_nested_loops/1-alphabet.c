#include "main.h"

/**
* main - print alphabet
*
* Description: using the main function
* That prints the alphabet, in lowercase, followed by a new line.
* Return: 0
*/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
