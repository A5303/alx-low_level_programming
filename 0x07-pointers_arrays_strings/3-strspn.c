#include "main.h"

/**
 * int_strspn - function that getsthe length of a prefix substring
 * @p: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int int_strspn(char *p, char *accept)
{
	int n = 0;
	int d;

	while (*p)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*p == accept[d])
			{
				d++;
				break;
			}
			else if (accept[d + 1] == '\0')
				return (n);
		}
		p++;
	}
	return (n);
}
