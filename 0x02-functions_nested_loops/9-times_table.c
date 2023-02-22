#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j;
	int times = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			times = i;
			times = times * j;
			if (j == 0)
			{
				_putchar(times + '0');
			}
			if (times < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(times + '0');
			}
			else if (times >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
