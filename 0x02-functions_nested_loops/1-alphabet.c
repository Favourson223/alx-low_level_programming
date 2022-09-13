#include<stdio.h>

/**
 * main - function that prints lowercase alphabets, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		printf("%c/n", c);
	return (0);
}
