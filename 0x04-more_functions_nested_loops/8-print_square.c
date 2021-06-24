#include "holberton.h"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
print_square(2);
print_square(10);
print_square(0);
return (0);
}
/**
 * print_square - a function that prints square.
 * @size: int representing number
 */
void print_square(int size)
{
int size, k;
for (i = 0; i <= size; i++)
{
_putchar('#');
for (k = i; k <=i; k++)
{
_putchar('#');
}
_putchar('\n');
}
