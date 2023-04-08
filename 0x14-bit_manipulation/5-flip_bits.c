#include "main.h"
/**
 * flip_bits - function that flips bits
 * @n: the number
 * @m: number to flip n to
 *
 * Return: number of bits you would need to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}
	return (bits);
}
