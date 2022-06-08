#include "main.h"

/**
 *main:print 1 if c is lowercase or print o if else
 *Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
