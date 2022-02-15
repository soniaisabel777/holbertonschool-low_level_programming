#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of all even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
long int  sum, first, second;

	
sum = 0;
first = 0;
second = 1;

while (sum < 20365011074)
{
sum = first + second;

first = second;
second = sum;
		
printf("%li", sum);
if(sum < 20365011074)	printf(", ");
}

printf("\n");

return (0);
}
