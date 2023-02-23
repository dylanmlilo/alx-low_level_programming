#include "main.h"
/**
 * more_numbers - print numbers form 0 to 14 - 10 times
 * followed by a new line
 * You can only use _putchar thrice in your code
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j %	10;
			if (j >= 10)
			{
				_putchar(1 + '0');
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
