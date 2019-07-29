#include "holberton.h"
#include "holberton.h"

/**
 * get_print_func - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument identifier
 * Return: pointer to a function.
 */

int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_chr},
		{"s", print_str},
		{NULL, NULL},
	};
	int i = 0;

	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[0])
			break;
		i++;
	}
	return (pr[i].f);
}
