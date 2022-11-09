#include "main.h"
/**
  * main - Entry Point
  * @argc: arguments
  * @argv: array pointing to arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int j = 0;


	while (j < argc)
	{
		printf("%s\n", argv[j]);
		j++;
	}
	return (0);
}
