#include <stdio.h>
/**
 * main - main block to be executed
 * Description: prints all single digits to base 10
 * Return: 0 success
 */
int main(void)
{
int c = 0;
while (c < 10)
{
	putchar(48 + c);
	c++;
}
putchar('\n');
return (0);
}
