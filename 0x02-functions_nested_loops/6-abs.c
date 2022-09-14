#include "main.h"
#include <stdio.h>

/**
* int _abs - function that computes the absolute value of an integer
* @n: the int using in _abs 
* Return: 0
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
