#include "holberton.h"
#include <stdio.h>
/**
 * print_line - priinting straight line.
 * @n: int representing the number of times we use _.
 *
 * Return: void.
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
