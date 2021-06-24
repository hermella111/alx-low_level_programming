#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for ALX School students.
 * Return: Always 0.
 */
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
/**
 * _isupper - check if parameter c represents an uppercase letter.
 * @c: int representing a character
 * Return: Always.
 */
int _isupper(int c)
{
if (c >= 97 && c <= 122)
return (0);
if (c >= 65 && c <= 90)
return (1);
}
