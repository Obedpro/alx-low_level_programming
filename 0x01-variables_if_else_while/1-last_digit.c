#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints random number to variable
*
* Return:Always(Successful)
*/
int main(void)
{
	int n;
	int i;
	char last[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s%d is %d and is ", last, n, n % 10);
	i = n % 10
	if (n > 0)
	{
		if (i > 5)
		{
			printf("greater than 5\n");
		}
		else if (i == 0)
		{
			printf("0\n");
		}
		else if (i < 6)
		{
			printf("less than 6 and not 0\n");
		}
	}
	else if ((n < 0) && (i < (-5)))
	{
		printf("greater than 5\n");
	}
	else if ((n < 0) && (i > (-5)))
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
