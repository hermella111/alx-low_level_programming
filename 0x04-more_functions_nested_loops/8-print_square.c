#include "holberton.h"
#include <stdio.h>
/**
 * print_square - a function that prints square.
 * @size: int representing number of line #
 * Return: void.
 */
void print_square(int size)
{
int i, j;
for (i = 0; i <= size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
