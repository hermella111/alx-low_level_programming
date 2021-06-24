#include "holberton.h"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
print_most_numbers();
return (0);
}
/**
 * print_most_numbers - prints numbers except 2 and 4.
 * @c: int representing numbers
 */
void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if (c == 2 || c == 4)
{
break;
}
else
_putchar(c);
}
_putchar('\n');
}
