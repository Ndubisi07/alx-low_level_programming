#include "main.h"

/**
 * main - print alphabet
 *
 * description: print alphabet in lowcase, followed my a new line
 *
 *return:0
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
