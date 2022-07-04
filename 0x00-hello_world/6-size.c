#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int I;
	long long int II;
	float d;
	char c;

	printf("Size of char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(I));
	printf("size of a long long int: %lu byte(s)\n", sizeof(II));
	printf("size of a float: %lu byte(s)\n", sizeof(d));
	return (0);
}
