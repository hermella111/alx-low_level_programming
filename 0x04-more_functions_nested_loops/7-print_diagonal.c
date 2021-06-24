#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - printing diagonal with dollar sign
 * @n : The number of lines using '\' characters to use
 *
  * Return: Void.
 */
void print_diagonal(int n)
{
int k;
int i;
for (k = 0; k < n; k++)
{
for (i = 0; i < k; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
