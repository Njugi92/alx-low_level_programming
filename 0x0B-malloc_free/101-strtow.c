#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 *word_len - locates the index marking the end of the
 the first word contained in the strintg
 * @str: the string to be searched
 * Return: the index marking the end of the initial words pointed to be string
 */
int word_len(char *str)
{
	int index = 0;
	int len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}
/**
 * count_words - counts the number of words containe within a string
 * @str: the string to be searched
 * Return: the number of words contained within the strr
 */
int count_words(char *str)
{
	int index = 0;
	int word = 0;
	int len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: the string to be split
 * Return: if str - NULL, str = "", or the function fails - NULL
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0;
	int words;
	int w;
	int letters;
	int l;

	if (str == NULL || strr[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
}
