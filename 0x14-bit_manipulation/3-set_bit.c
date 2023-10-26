#include "main.h"
/**
 * set_bit - it sets the bit a number to 1
 *
 * @n: pointer to the bit to be manipulated
 * @index: the bit position to be manipulated
 * Return: -1 if failed and 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
