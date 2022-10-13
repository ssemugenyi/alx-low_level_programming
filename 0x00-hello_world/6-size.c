#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	char intType;
	int floatType;
	long int doubleType;
	long long int charType;
	float floattype;
	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %zu byte(s)\n", sizeof(intType));
	printf("Size of an int: %zu byte(s)\n", sizeof(floatType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(charType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floattype));
	return (0);
}
