#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while(n >= 10)
	{
		m=n%10;


		if (m > 5)
 	
			printf("last digit of %d is %d and is greater than 5", n);
		else if (m == 5)

			printf("last digit of %d is %d and is 5", n); 
	
		else

			printf("last digit of %d is %d and is less than 6 and not 0", n);
	}
	return (0);
}	
	
