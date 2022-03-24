#include "main.h"

/**
 * leet - encodes string
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
	int i, j;
	char str1[] = "aeotl";
	char Str1[] = "AEOTL";
	char str2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == str1[j] || s[i] == Str1[j])
			{
				s[i] = str2[j];
				break;
			}
		}
	}
	return (s);
}
