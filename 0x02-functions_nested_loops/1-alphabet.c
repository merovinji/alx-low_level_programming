#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lower case, followed by a new line.
 *
 * Return: Always 0. 
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (c <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
