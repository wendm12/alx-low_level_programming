#include "main.h"

/*
 *main-print alphabet x10
 *Return:0
 */
void print_alphabet_x10(void)/*defination of main function print alphabet x10*/
{
	int i=0;
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
	return;
}

