#include "main.h"
/**
  * main - Entry Point
  * @argc: argument count
  * @argv: array pointing to arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
