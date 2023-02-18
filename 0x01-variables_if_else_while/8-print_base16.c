#include <stdio.h>
/**
 * main - prints all the numbers of base 16 followed by a new linw
 * main - using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
