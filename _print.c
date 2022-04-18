#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _strlen - calculate the length of a string
 * @s: The string
 * Return: The length of s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _printf - print the input to stdout
 * @format: The input format
 * Return: The number of characters
 */

int _printf(char *format, ...)
{
	unsigned int i = 0, j = 0;
	int len1, len2;
	char *s;

	va_list arg;

	va_start(arg, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					i = va_arg(arg, int);
					len1 = 1;
					_putchar(i);
					j++;
					break;
				}

				case 's':
				{
					s = va_arg(arg, char *);
					len2 = _strlen(s);
					puts(s);
					break;
				}
			}
		}
		i++;
	}
	va_end(arg);
	putchar('\n');
	return (len1 + len2);
}
