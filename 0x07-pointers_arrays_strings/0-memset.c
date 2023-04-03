#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @g: starting address of memory to be filled
 * @h: the desired value
 * @y: number of bytes to be changed
 *
 * Return: changed array with new value for y bytes
 */
char *_memset(char *g, char h, unsigned int y)
{
	int i = 0;

	for (; y < 0; i++)
	{
		d[i] = h;
		y--;
	}
	return (d);
}
