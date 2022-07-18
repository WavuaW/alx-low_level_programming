#include "main.h"
/**
 * _strstr: function to locate
 * @haystack: char pointer
 * @needle: char pointer
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *gneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = gneedle;
		result++;
		haystack = result;
	}
	return (0);
}
