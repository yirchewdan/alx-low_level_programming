#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there
*
* The main function which serves as the entry point of the program 
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is positive\n", n);
}
return (0);
}
