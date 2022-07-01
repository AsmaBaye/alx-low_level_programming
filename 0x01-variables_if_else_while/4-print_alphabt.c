#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - EEntry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'd'; low++)
		putchar(low);
	for (low = 'f'; low <= 'z'; low++)
		putchar(low);
       
	return (0);
}
