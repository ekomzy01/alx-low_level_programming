#include <stdio.h>
/**
 * *_memset - file memory with constant byte
 * @s: char data type
 * @n: long int
 * @b: constant byte
 * Return: s pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
