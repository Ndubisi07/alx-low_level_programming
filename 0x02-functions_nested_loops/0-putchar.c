#include "main.h" 

/**
 * main - print _putchat
 *
 * decription print _putchar
 *
 * return:0 
 */

int main()
{ 
	char text[9] = "_putchar";
int i = 0;

for (i = 0; i < 8; i++)
{
_putchar(text[i]);
}
_putchar('\n');

return (0);
}	       
