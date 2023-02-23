#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * followed by a new line
 * @n: Where n is the number of times the character _ should be printed
 *
 * You can only use _putchar function to print
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
