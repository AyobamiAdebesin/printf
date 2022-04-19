#include "main.h"

/**
 * get_flag_func - function to find a function pointer
 * - associated with specifier
 *
 * @a: specifier to find the correct function
 *
 * Return: function pointer
 */

int (*get_flag_func(const char a))(va_list)
{
unsigned int m = 0;

	printer_t ops[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_integer},
		{'d', print_decimal},
		{'b', print_binary},
		{'u', print_unint},
		{'o', print_octal},
		{'R', rot13},
		{'r', print_reversed},
		{'\0', NULL}
	};


	for (; ops[m].symbol; m++)
	{
		if (a == ops[m].symbol)
			return (ops[m].func_t);
	}

	return (NULL);
}

