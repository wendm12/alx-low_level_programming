#include "main.h"

/*
 * largest_number-reterns the largest of 3 number
 * @a: first integer
 * @B: second integer
 * @c: third integer
 * Return : largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c:
	}
	else 
	{
		largest = none;
	}
	return (largest);
}
