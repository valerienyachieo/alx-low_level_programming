#include "main.h"
int CheckPrime(int i, int num);
/**
 * CheckPrime - function that checks ifan integer is a prime number.
 * @i: input that acts as the check variable
 * @num: input that is the number to be checked
 *
 * Return: integer
 */
int CheckPrime(int i, int num)
{
	if (num <= 1)
		return (0);
	else if (num == i)
		return (1);
	else if (num % i == 0)
		return (0);
	return (CheckPrime(i + 1, num));
}
/**
 * is_prime_number - function that checks if an integer is a prime number.
 * @n: input integer to be checked
 *
 * Return: 1 if input integer is a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	return (CheckPrime(2, n));
}
