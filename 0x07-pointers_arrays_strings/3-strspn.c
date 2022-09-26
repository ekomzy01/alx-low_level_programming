#include "main.h"
/**
 * _strspn - gets the length of a substring
 * @s: pointer vairable
 * @accept: pointer vairable
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[i])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++
	}
	return (c);
}
