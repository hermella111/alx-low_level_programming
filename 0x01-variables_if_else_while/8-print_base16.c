#include<stdio.h>
/**
 * main
 *
 * Return - Entry point
 */
int main(void)
{
int k;
for (k = '0'; k <= '9'; k++)
{
putchar(k);
}
for (k = 'a'; k <= 'f'; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}
