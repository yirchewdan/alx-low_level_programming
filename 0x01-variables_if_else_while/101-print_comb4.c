#include <stdio.h>

/**
 * main - displays  numbers between 012 to 789 to standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, e, j;
a = 48;
e = 48;
j = 48;
while (e < 58)
{
a = 48;
while (a < 58)
{
j = 48;
while (j < 58)
{
if (e != a && e != j && a != j && e < a && a < j)
{
putchar(e);
putchar(a);
putchar(j);
if (a == 56 && e == 55 && j == 57)
{
	break;
}
putchar(',');
putchar(' ');
}
j++;
}
a++;
}
e++;
}
putchar('\n');
return (0);
}
