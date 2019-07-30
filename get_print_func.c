#include "holberton.h"

/**
 * get_print_func - selects the correct function to perform the operation.
 * @s: argument indentifier
 * Return: pointer to a function.
 */

int (*get_print_func(char s))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_chr},
		{"s", print_str},
		{"i", print_int},
		{"d", print_int},
		{"b", print_bnr},
		{"u", print_unt},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_upx},
		{"S", print_usr},
		{"p", print_add},
		{"r", print_rev},
		{"R", print_rot},
		{NULL, NULL},
	};
	int i = 0;

	while (pr[i].type_arg)
	{
		if (s == pr[i].type_arg[0])
			break;
		i++;
	}
	return (pr[i].f);
}
