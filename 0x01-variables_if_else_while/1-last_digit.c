#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, LastDigit;
lastDigit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
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
