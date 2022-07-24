#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: pointed area.
 * @b: constant.
 * @n: bytes of memory.
 *
 * Return: pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		printf("out put %d",s[i]);
	}

	return (s);
}
