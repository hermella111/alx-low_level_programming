#include <stdio.h>
/** 
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;
for (k = '0'; k <= '9'; k++)
{
putchar(k);
if (k == '9')
putchar(9);
else
putchar(',');
}
putchar('\n');
return (0);
}
