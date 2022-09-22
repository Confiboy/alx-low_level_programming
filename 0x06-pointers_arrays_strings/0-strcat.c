#include "main.h"

/**
 * _strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destination string to be concatenated upon
 * Return:pointer to the resulting string
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		j++;
	}

	while (dest[index++])
	{
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	dest[i] = '\0';

	return (dest);
}
