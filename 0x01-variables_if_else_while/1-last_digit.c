#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- block to be executed
 * Description: Get random number and compare to 5
 * Return: 0 success
 */
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last >5)
{
printf("Last digit of %d is %d and is dreater than 5\n", n, last);
}
else if (n % 10 == 10)
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
else 
{
printf("Last digit of %d is %d and is less that 6 and not 0\n", n, last);
}
return (0);
}
