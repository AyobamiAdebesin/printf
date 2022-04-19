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
    int len1a, len1b, len2a, len2b;
    int len3a, len3b, len4a, len4b;
    len1a = _printf("Let's try to printf a simple sentence.\n");
    len1b = printf("Let's try to printf a simple sentence.\n");
    printf("Len1a:[%d]\n", len1a);
    printf("Len1b:[%d]\n", len1b);

    
    len2a = _printf("Character:[%c]\n", 'H');
    len2b = printf("Character:[%c]\n", 'H');
    printf("Len2a:[%d]\n", len2a);
    printf("Len2b:[%d]\n", len2b);


    len3a = _printf("String:[%s]\n", "I am a string !");
    len3b = printf("String:[%s]\n", "I am a string !");
    printf("Len3a:[%d]\n", len3a);
    printf("Len3b:[%d]\n", len3b);

    len4a = _printf("Percent:[%%]\n");
    len4b = printf("Percent:[%%]\n");
    _printf("Len4a:[%d]\n", len4a);
    printf("Len4b:[%d]\n", len4b);


    return (0);
}