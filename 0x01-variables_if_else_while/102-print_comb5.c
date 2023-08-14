#include <stdio.h>
/**
 * main - Prints all possible combinations of a pair of
 * two digit numbers, without any repetition.
(*
 * Return: 0 on success.
 */

int main(void)
{
int a, i;
for (a = 0; a <= 99; a++)
{
for (i = 0; i <= 99; i++)
{
if (a < i && a != i)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (a != 98 || i != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
