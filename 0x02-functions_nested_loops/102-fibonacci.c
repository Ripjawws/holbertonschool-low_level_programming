#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

long int main(void)
{ 
long int f1 = 0, f2 = 1, i;  
for (i = 1; i <= 50; i++) 
{ 
printf("%ld, ", f2); 
long int next = f1 + f2; 
f1 = f2; 
f2 = next;
}  
return 0; 
} 
