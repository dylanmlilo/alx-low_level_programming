#include <stdio.h>
/**
 * main - prints the alphabet in reverse in lowercas
 * main - can only use putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
