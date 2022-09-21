#include "main.h"
/**
 * _index0f - returns boolean if special
 *
 * @a: character to return
 *
 * Return: true or false
 */
int _index0f(char a)
{
	int i;
	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(', ')', '{
', '}'};
	for (i = 0; i < 13; i++)
	{
		if (capArr[i] == a)
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalizes the string
 *
 * @s: string
 *
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_index0f(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'Z' && (_index0f(s[i - 1])  || i == 0))
			s[i] = s[i] - 32;
	}
	return (s);
}

