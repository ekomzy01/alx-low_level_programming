#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int n = 0, i, j;
	char *str, c;

	while (n >= 0)
	{
		if (s[n] == '\0')
			break;
		n++;
	}
	str = s;
	for (i = 0; i < (n - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			c = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = c;
		}
	}
}
