#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c = 'a';
int d = 0;
while (d < 10)
{
putchar(d + '0');
d++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
