#include<stdio.h>
/*
 *main:print lowercase alphabet in reverse, followed by a new line
 */
int main(void)   /*main:print lowercase alphabet in reverse*/
{
	int ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
