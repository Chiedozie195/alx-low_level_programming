#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** more headers goes there 
* main - print a random number and state whether
*         it is a postive, negative, or zero
*
*         Return: Always 0.
*/         
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if(n > 1)
printf("%d is positive", n);
else if (n < 0)
printf("%d is negative\n", n);	
else

printf("%d is zero", n);

return(0);
}					
