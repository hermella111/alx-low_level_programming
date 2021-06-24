#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
printf("%d\n", mul(98, 1024));
printf("%d\n", mul(-402, 4096));
return (0);
}
/**
 * mul - takes two numbers to multiply
 * @a: int representing one of the number
 * @b: int representing the second number
 *
 * Return: product
 */
int mul(int a, int b)
{
return (a * b);
}
