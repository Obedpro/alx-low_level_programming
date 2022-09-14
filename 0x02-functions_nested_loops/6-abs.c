#include "main"
#include <stdio.h>

/**
* int _abs - function that computes the absolute value of an integer
* 
* @n: the int using in the function 
* Return: 0
*/
int _abs(int n)
{
	int n ;
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
