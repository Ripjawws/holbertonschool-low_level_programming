#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
char b;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (b = 'A'; b <= 'Z'; b++)
putchar(b);
putchar('\n');
return (0);
}
