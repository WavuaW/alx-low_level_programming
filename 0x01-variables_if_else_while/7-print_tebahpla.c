#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main lock to be executed
 * Description: prints all sinf=gle digits to base 10
 * Return: 0 Success
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
	putchar(c);
	c--;
}
putchar('\n');
return (0);
}
