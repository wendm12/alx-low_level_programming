#include<stdio.h>
/*
 * main:print uppercase and lowercase followed by a new line
 * Return:uppercase and lowercase
 */
int main(void)
{
	int ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
