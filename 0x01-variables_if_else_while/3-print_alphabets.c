#include <stdio.h>
/**
 * main - main block to be executed
 * Description - prints lower case, then upper case then new line
 * Return: 0 success
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	putchar(c);
	c++;
}
c = 'A';
while (c <= 'Z')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
