#include <stdio.h>

/**
* main - prints the single ditgit numbers of base 10
*
* Description: using the main function
* this program prints all single digit numbers of base 10 starting from 0
* Return: 0
*/
int main(void)
{
	int a;

	a = 0;
	for (a = 0; a < 10; a++)
		printf("%a", a);
	printf("\n");
	return (0);
}
