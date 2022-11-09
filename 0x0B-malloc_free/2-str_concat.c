#include "main.h"
/**
  * str_concat - concatenates two string
  *
  * @s1: the first string
  * @s2: the string to add to @s1
  *
  * Return: a pointer that points to a newly allocated space which
  * contains the contents of @s1, followed by the contents of @s2,
  * and null terminated. Should return NULL on failure.
  */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int s1len = 0, s2len = 0, s3len, i = 0,  j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1len])
	{
		s1len++;
	}
	while (s2[s2len])
	{
		s2len++;
	}
	s3len = s1len + s2len;
	s3 = malloc(sizeof(char) * s3len + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	while (i < s1len)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i <= s3len)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}
