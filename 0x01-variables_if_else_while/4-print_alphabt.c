#include <stdio.h>
/**
 * main - main block to be executed
 * Description - prints alphabet
 * Return: 0 success
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
	c++;
}
putchar('\n');
return (0);
}
