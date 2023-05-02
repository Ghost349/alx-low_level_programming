#include "main.h"

int prime(int n, int m);
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
	return (prime(n, n - 1));
}

/**
 * prime - prime number recursively.
 * @n: number being used to scan
 * @m: The one we use to divide n.
 *
 * Return: 1 if number is prime or otherwise return 0.
 */
int prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (prime(n, m - 1));
}
