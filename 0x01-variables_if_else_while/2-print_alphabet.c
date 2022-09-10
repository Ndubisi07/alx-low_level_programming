#include <stdio.h>

/**
* main - print the alphabet in lowercase.
*
* return: always 0.
*/

int main(void)
{
	char letter;

	for ( letter = 'a'; letter <= 'z'; letter ++)
		putchar(letter);

	putchar('\n');

	reture(0);

}
