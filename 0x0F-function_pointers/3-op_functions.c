#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - addition of integer
 * @a: integer to add on to
 * @b: integer to add a to
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction of integers
 * @a: integer to sub from
 * @b: integer substracting from a
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of integers
 * @a: the integer being multiplied
 * @b: the integer mulltiplying a
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of integers
 * @a: the integer being divided from
 * @b: the integer dividing a
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus of integers
 * @a: integer being moduled
 * @b: integer moduling a
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
