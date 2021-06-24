#include <stdio.h>
/**
 * main - prints numbers 1 to 100 fizz for multiple of 3 and buzz for 5.
 *
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("%s", "Fizz ");
}
else if (i % 5 == 0)
{
printf("%s", "Buzz ");
}
else if (i % 5 == 0 && i % 3 == 0)
{
printf("%s", "FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
