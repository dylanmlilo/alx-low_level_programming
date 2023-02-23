#include "main.h"
/**
 * print_most_numbers - print numbers form 0 to 9
 * followed by a new line
 * Do not print 2 and 4
 * You can only use _putchar twice in your code
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
