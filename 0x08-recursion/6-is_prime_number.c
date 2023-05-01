#include "main.h"

int actual_prime(int n, int m);
/**
*is_prime_number- a function returning 1 if an integer is a prime number
 *@n: number to evaluate
 *
 *Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - Determines if a number is prime recursively
 * @n: number to evaluate
 * @m: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int m)
{
	if (n % m == 0 && m > 0)
		return (0);
	if (m == 1)
		return (1);
	return (actual_prime(n, m - 1));
}
