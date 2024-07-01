#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function name
 * @dest: function parameter 1
 * @src: parameter 2
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
 * main - Entry point
 * Description: This function tests _strcpy function.
 * Return: Always 0 (Success)
 */
int main(void)
{
char src[] = "Hello, World!";
char dest[50];

_strcpy(dest, src);
printf("Copied string: %s\n", dest);

return (0);
}
