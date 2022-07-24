#include "main.h"

/**
 * is_prime_number - Checks if the given number is prime or not.
 * @n: Given number.
 *
 * Return: if the number is prime returns 1, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (n > 2 ? prime_number(2, n) : 1);
}
