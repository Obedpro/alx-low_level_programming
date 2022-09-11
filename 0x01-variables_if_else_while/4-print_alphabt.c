#include <stdio.h>

/**
* main - prints the alphabet in lowercase
*
* Description: using the main function
* this program prints alphabet in lowercase except 'q' and 'e'
* Return: 0
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
