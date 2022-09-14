#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return 0
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char a;
	while (n < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}
}
