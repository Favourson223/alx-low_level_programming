#include "main.h"

/*
 * a function that returns the length of a string.
 * Return: Always 0.
 */

int _strlen(char *a)
{
int t;

t = 0;
while (a[t] != '\0')
{
t++;
}
return (t);
}
