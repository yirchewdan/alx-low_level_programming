#include <stdio.h>
/*
*A C program to print the english alphabets 
*in both lower and uppercase
*/
int main(void)
{
int i, j;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (j = 65; j <= 90; j++)
{
putchar(j);
}
putchar(10);
return (0);
}
