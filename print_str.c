#include "holberton.h"

/**
 * print_str - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;

	str = va_arg(arguments, char *);
	for (i = 0; str[i]; i++)
		ibuf = handl_buf(buf, str[i], ibuf);
	return (i);
}
