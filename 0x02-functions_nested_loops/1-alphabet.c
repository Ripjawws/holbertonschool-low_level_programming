#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet -print the character
 * Return: nothing
 */
void print_alphabet(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar ('\n');
}
