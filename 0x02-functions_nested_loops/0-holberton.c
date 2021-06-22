#include "holberton.h"
int _putchar(char c);
/**
 * main - check the code for alx School students.
 *
 * Return: Always 0.
 */
int main(void)
{ 
char cat[9] = "Holberton";
int i;
for (i = 0; i <= 8; i++)
{
_putchar(cat[i]);
}
_putchar('\n');
return (0);
}
