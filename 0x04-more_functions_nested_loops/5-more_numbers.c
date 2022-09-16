#include "main.h"
/**
 * more_numbers - print numbers 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int ch, mn;

	ch = 0;
	while (ch < 10)
	{
		mn = 0;
		while (mn < 15)
		{
			_putchar(mn);
			mn++;
		}
		_putchar('\n');
		ch++;
	}
}


