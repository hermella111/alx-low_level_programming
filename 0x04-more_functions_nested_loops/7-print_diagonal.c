#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
print_diagonal(0);
print_diagonal(2);
print_diagonal(10);
print_diagonal(-4);
return (0);
}
/**
 * print_diagonal - printing diagonal with dollar sign
 *
 */
void print_diagonal(int n)
{
int k;
for (k = 0; k < n; k++)
{
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
