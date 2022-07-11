#include "main.h"
/**
 * _strlem - finds the length of the string
 * @s: pointer for the string to be checked 
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	
	return (i);
}
