#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -a fucntion that returns the sum of all its parameters
 * @n: constant unsigned integer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ko;
	unsigned int t, sum = 0;

	if (n == 0)
		return (0);
	va_start(ko, n);

	t = 0;
	for (; t < n; t++)
		sum += va_arg(ko, int);

	va_end(ko);

	return (sum);
}
