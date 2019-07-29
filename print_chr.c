#include "holberton.h"
#include <stdio.h>
/**
 * print_chr - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;
	int i;

	i = 0;
	c = va_arg(arguments, int);
	if (c != 0)
	{
		handl_buf(buf, c, ibuf);
		i = 1;
	}

	return (i);
}
