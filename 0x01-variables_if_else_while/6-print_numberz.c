#include <stdio.h>
/**
 * main - prints all the numbers of base 10 from 0 to 9
 * main - using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
