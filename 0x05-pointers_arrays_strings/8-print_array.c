#include "main.h"

/**
 * print_array - the function name
 * @a: parameter 1 (array of integers)
 * @n: parameter 2 (number of elements in the array)
 * Description: This function prints n elements of an array of integers.
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
