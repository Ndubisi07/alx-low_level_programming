#include <stdio>
/**
 * main - main block
 *  
 * Description: use 'putchar' function  to print the alphabet in lowercase.
 * 
 * Return: 0
 */
int main(void)
{
	char letter;

	for ( letter = 'a'; letter <= 'z'; letter ++)
		putchar(letter);

	putchar('\n');

	reture(0);

}
