#include "main.h"
/**
 * print_octal - prints the octal representation of a decimal number
 * @arguments: argument
 *
 * Return: number of characters printed
 */

int print_octal(va_list arguments)
{
	int j = 0;
	unsigned int num = va_arg(arguments, unsigned int);
	int arr[sizeof(int) * 8 + 1];
	int i = 0;

	if (num < 8)
	{
		_write(num + '0');
		j++;
		return (j);
	}

	else
	{
		while (num > 8)
		{
			arr[i] = num % 8;
			num /= 8;
			i++;
		}

		if (num < 8)
			arr[i] = num;

		while (i >= 0)
		{
			_write(arr[i] + '0');
			j++;
			i--;
		}
	}
	return (j);
}
