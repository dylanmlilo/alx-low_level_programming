#include <stdio.h>
#include <unistd.h>
#include "main.h"

void print_alphabet(void)
{
    char alph;
    for (alph = 'a'; alph <= 'z'; alph++)
    {
        _putchar(alph);
    }
}

int main(void)
{
	print_alphabet();
	return (0);
}
