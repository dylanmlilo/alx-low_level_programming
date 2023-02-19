#include <stdio.h>
/**
 * main - Program that prints all possible combinations of 2 digits
 *
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k;
	int num = 1;

	for (i = 0; i < 10; i++)
	{
		for (k = num; k < 10; k++)
		{
			putchar(i + '0');
			putchar(k + '0');
			if (num != 9 && i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
