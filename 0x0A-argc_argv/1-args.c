#include "holberton.h"
#include <stdio.h>
/**
 *main - main
 *@argc: argc
 *@argv: argv
 *Return: 0
 **/
int main(int argc, __attribute__((unused)) char *argv[])
{
int count, result;
if (argc > 1)
{
for (count = 1; count < argc; count++)
{
result = count;
}
printf("%d\n", result);
}
else
printf("0\n");
return (0);
}
