#include <stdio.h>


int main(void)
{
	int i = 0;
	int n = 0;
	int j = 0;
	int r = 0;

	while (n <= 1024)
	{
		n += (3 * i);
		i++;
	}
	while (r <= 1024)
	{
		r += (5  * j);
		j++;
	}
	printf("%d\n", n + r);
	printf("\n");
	return (0);
}
