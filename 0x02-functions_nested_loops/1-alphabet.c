#include "main.h"

/**
 * print_alphabet - make the alphabet
 *
 * Retrn: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
