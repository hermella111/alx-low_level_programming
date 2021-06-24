#include "holberton.h"
#include <stdio.h>
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
