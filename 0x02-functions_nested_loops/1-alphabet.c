#include "main.h"
/**
 * print_alphabet - print lowercase alphabet
 * Return: always 0 success
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar("%c", a);
		a++;
	}
	_putchar("\n");
	return 0;
}
