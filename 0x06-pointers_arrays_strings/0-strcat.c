#include "holberton.h"
/**
 * _strcat - copies a string
 * @dest: defines dest
 * @src: defines src
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
while (*dest)
dest++;
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (dest);
}
