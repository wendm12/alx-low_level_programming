#include "main.h"

/**
 *main:print 1 if c is lowercase or print o if else
 *Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
	return (0);
}
