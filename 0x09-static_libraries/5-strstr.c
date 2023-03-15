#include "main.h"
/**
 * _strstr - function find first occurrence substring needle in string haystack
 * @haystack: string where subsstring is to be located
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int ln;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		ln = 0;

		if (haystack[ln] == needle[ln])
		{
			do {
				if (needle[ln + 1] == '\0')
					return (haystack);
				ln++;
			} while (haystack[ln] == needle[ln]);
		}
		haystack++;
	}
	return ('\0');
}
