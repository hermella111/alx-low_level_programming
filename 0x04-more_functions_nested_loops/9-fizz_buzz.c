#include <stdio.h>
/**
 * main - prints numbers 1 to 100.
 *
 * Return: 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
printf("%s", "Fizz ");
if (i % 5 == 0)
printf("%s", "Buzz ");
if (i % 5 == 0 && i % 3 == 0)
printf("%s", "FizzBuzz ");
else
printf("%d ", i);
}
printf("\n");
return (0);
}
