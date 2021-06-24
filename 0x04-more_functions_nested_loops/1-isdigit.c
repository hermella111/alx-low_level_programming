#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - checks for number between 0 and 9
 * @c: int representing character
 * Return: 1 if the number is below 9. 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
