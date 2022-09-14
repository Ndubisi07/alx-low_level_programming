#include "main.h"

/**
* print alphabet. print alphabet lowcase
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
