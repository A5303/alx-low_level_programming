#include "main.h"
/**
 * _strchr-Entry point
 * @p: input
 * @g: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *p, char g)
{
	int i = 0;

	for (; p[i] >= '\0'; i++)
	{
		if (p[i] == g)
			return (&p[i]);
	}
	return (0);
}
