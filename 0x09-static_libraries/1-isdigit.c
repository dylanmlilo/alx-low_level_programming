#include "main.h"
/**
 * _isdigit - check whether digit is between 0 and 9
 *@c: The digit to be checked
 *
 * Return: (1) success and (0) if unsuccessful
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
