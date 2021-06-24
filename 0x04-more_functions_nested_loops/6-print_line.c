#include "holberton.h"
/** main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
print_line(0);
print_line(2);
print_line(10);
print_line(-4);
return (0);
}
/** 
 * print_line - printing straight line.
 * @n: int representing the number of times we use _.
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
