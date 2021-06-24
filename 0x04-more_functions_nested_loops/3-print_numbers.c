#include "holberton.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers 0 to 9.
 * @c: is an int param.
 *
 * Return: 0.
 */
void print_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
_putchar(c);
}
_putchar('\n');
}
