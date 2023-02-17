#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints whether the number stored in the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* making use of the if else statements to check the number */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negetive\n", n);
    }
    else
        printf("%d is zero\n", n);
return (0);
}
