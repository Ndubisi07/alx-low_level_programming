#include "main.h"

/**
 * print alphabet in lowcase. followed my a new line
 *
 *return: always 0 (success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}

_putchar('\n');
}
