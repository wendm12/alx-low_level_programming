#include "main.h"

/**
 *print_sign -return 1 and print +,return 0 and print 0 ,return -1 and print -
 *Return: 1,0,-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	       	return(1);
		putchar('+');
	}
	else if (n == 0)
	{
		putchar('0');
		return('0');
	}
	else 
	{
		putchar('-');
		return('1');
	}
}
