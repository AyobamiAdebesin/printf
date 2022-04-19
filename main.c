#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len1, len2, len3;
    len1 = _printf("Let's try to printf a simple sentence.\n");
    printf("Len:[%d]\n", len1);

    len2 = _printf("Character:[%c]\n", 'H');
    printf("Len:[%d]\n", len2);

    len3 = _printf("String:[%s]\n", "I am a string !");
    printf("Len:[%d]\n", len3);

    return (0);
}