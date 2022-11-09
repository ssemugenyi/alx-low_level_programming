#include "main.h"
/**
  * main - Entry Point
  * atoi is a function that converts a string into an int
  * @argc: arguments
  * @argv: array pointing to arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
