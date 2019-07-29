#include "holberton.h"
/**
 * print_unt - writes the character c to stdout
 * @arguments: The character to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_unt(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned int int_in, int_temp, i, div;

	int_in = va_arg(arguments, unsigned int);
	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = handl_buf(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i);
}
