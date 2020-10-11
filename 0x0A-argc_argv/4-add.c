#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - main
 *@argc: argc
 *@argv: argv
 *Return: 0
 **/
int main(int argc, char *argv[])
{
int i, sum, val;
if (argc < 1)
{
printf("0\n");
}
while (argc-- && argc > 0)
{
for (i = 0; argv[argc][i] != '\0'; i++)
{
if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
val = atoi(argv[argc]);
sum += val;
}
printf("%d\n", sum);
return (0);
}
