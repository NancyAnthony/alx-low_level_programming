#include "main.h"
/**
 * _putchar - it prints a character at a time
 * @c: the character to be printed
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
