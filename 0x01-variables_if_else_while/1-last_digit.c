#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int LastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
LastDigit = n % 10;
/* your code goes there */
if (LastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
}
else if (LastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, LastDigit);
}
else if (LastDigit < 6 && n != 0)
{
printf("Last digit of %d is %d and is 0\n", n, LastDigit);
}
return (0);
}
