#include<stdio.h>
/*alx task 2-print_alphabet.c */

/*main:print the alphabet in lowercase, followed by a new line */
int main(void)

{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return 0;
}

