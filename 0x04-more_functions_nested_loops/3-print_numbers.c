#include "holberton.h"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
print_numbers();
return (0);
}
/**
 * print_numbers - prints numbers 0 to 9.
 * @k: int representing numbers 0 to 9.
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
