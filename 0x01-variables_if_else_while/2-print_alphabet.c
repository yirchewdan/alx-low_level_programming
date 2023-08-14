#include <stdio.h>

/*A C program that uses for loop to print the English alphabet in lower case */
/*followed by a new line*/
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar(10);
return (0);
}
