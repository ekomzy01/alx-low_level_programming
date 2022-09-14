#include "main.h"
/**
 * _islower - Returns 1 if character is lower case and 0 if not
 * @c: char data type
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
