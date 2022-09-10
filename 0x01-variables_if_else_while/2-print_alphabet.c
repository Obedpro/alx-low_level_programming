#include <stdio.h>
#include <sdlib.h>
#include <time.h>

/**
* main - prints the alphabets in lower cases
*
* Description: using the main function 
* this program prints Write a program that prints the alphabet in lowercase, followed by a new line
* Return: 0
*/

int main(void)
{
	char c;
	for (c = Ã'a';c<='z';c++)
		putchar(c);
	putchar('\n');
	return (0);
}
