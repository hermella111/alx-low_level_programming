#include <stdio.h>                                                              
/* more headers goes there */                                                   
/**                                                           
 * main - Entry point
 *
 * Return: Always 0 (Success)                                             
 */                                                                                                 
/* betty style doc for function main goes there */                              
int main(void)                                                          
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
