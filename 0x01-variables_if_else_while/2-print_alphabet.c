#include <stdio.h>
#include <stdlib.h>
/**
 * main - block to be executed
 * Description: prints alphabet in lower case
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	putchar(c);
	c++;

}
putchar('\n');
return (0);
}
