#include "main.h"
/**
 * print_alphabet - print lowercase alphabet
 * Return: always return 0 success
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' alphabet <= 'z' alphabet++)
		_putchar("%c", alphabet);
	_putchar("\n");
}
