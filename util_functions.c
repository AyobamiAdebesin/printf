#include <stddef.h>
#include "main.h"
#include <stdlib.h>
/**
 * _print_str - prints a string
 * @string: string to be printed
 * Return: length of printed characters
 */

int _print_str(char *string)
{
	int count = 0;

	if (string != NULL)
		while (*string)
		{
			_putchar(*string++);
			count += 1;
		}
	else
		return (_print_str("(null)"));
	return (count);
}

