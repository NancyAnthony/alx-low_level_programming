#include "main.h"
/**
 * binary_to_uint - ths prgram converts binary numbers
 * to integers/decimal numbers
 *
 * @b: a character pointer to a string containing
 * binary numbers
 *
 * Return: converted decimal (output)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	size_t i = 0;
	size_t k = 0;
	size_t sum = 0;
	size_t pow = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	return (0);
	for (k = length - 1; k > 0; k--)
	pow = pow * base;
	sum = sum + (pow * (b[i] - 48));
	length--;
	pow = 1;
	}
	return (sum);
}
