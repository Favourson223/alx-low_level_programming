#include "main.h"

/**
 * _strlen -length of a string
 * @s: A pointer to an int that will be changed/updated
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
