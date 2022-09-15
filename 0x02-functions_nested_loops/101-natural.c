#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int i = 0;
	int n = 0;
	int m = 0;
	int k, j = 0;

	while ( n <= 1024)
	{
		n += (3 * i);
		i++;	
	}
	while ( r <= 1024)
	{
		r += (5  * j);
		j ++;
	}
	k = add(r, n);
	printf("The sum of multiples of 3 or 5 bellow 1024 is %d\n", k);
	return (0);
}
