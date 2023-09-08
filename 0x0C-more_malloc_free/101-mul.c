#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int _atoi(char *s);
int _strlen(char *s);
/**
 * main - function with two arguments
 * @argc: argument count
 * @argv: argument value
 *
 * Description: program that multiplies two positive numbers
 * Return: value
 */
int main(int argc, char *argv[])
{
	int count, len1, len2, temp1, temp2, *array, *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	t_len = len1 + len2 - 1;

	array = malloc(sizeof(char) * (len1 + len2 + 1));
	if (array == NULL)
		return (NULL);

	len1 -= 1;
	len2 -= 1;
	for (count = 1; argv[count] != '\0', count++)
	{
		for (; argv[1][len1]; len1--)
		{
			temp1 = argv[1][len1 - 1] - '0';;
		}
		for (; argv[2][len2]; len2--)
		{
			temp2 = argv[2][len2 - 1] - '0';
		}
		for (; array[t_len] > 0
		if ((temp1 * temp2) > 9)
			array[
	}
}

int _atoi(char *s)
{
	int i, sign, numb;

	h = 0;
	sign = 1;
	numb = 0;

	while (s[h] != '\0')
	{
		if (s[h] == '-')
			sign *= -1;
		if (s[h] >= '0' && s[h] <= '9')
		{
			while (s[h] >= '0' && s[h] <= '9')
			{
				numb = (s[h] - '0') * sign + numb * 10;
				h++;
			}
			break;
		}
		h++;
	}
	return (numb);
}

int _strlen(char *s)
{
	int h;

	h = 0;
	while (*(s + h) != '\0')
	{
		h++;
	}
	return (h);
}

