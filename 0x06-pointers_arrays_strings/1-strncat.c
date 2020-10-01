#include "holberton.h"
/**
 * _strncat - Entry point
 * Description: concatenate a string from source to destination.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes will be concat.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
  int l;
  int i;
  for ( l = 0; dest[l] != '\0'; l++)
    {
    }
  for (i = 0; src[i] != '\0'; i++)
    {
    }
  for ( i = 0; i < n && src[i] != '\0'; i++)
    {
      dest [l + i] = src[i];

    }
  return (dest);

}
