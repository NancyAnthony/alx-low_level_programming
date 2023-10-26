#include "main.h"
/**
 * print_bin - it prints the binary representation of a number recursively
 * @n: the decimal input
 * Return: void
 */
void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - it prints out binary
 * @n: decimal to be converted
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bin(n);
	}
}
