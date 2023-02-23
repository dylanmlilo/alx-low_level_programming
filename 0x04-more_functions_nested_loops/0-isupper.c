#include "main.h"
/**
 *_isupper - check the letter is uppercase
 *@c: The letter to be checked
 *
 * Return: (1) success and (0) if unsuccessful
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
