#include "main.h"

/*
 *main:print alphabet x10
 *print_alphabet_x10:print alphabet x10
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;
	while (i < 10)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			putchar(j);
		}
		putchar('\n');
		i++;
	}
}

