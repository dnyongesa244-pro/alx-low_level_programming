#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * is_space - function
 *
 * @c: character
 *
 * Return: c (Success)
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - function for space
 *
 * @str: string
 *
 * Return: words (Success)
 */
int count_words(char *str)
{
	int count = 0;
	
	int is_word = 0;
	
	while (*str)
	{
		if (!is_space(*str))
		{
			if (!is_word)
			{
				count++;
				is_word = 1;
			}
		}
		else
		{
			is_word = 0;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - check for double string
 *
 * @str: Stirng
 *
 * Return: NULL (Success)
 */
char **strtow(char *str)
{
	int num_words;

	char **words;

	int word_index;

	int word_length;

	int is_word;

	int i;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
       	num_words = count_words(str);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	word_length = 0;
	is_word = 0;
	while (*str)
	{
		if (!is_space(*str))
		{
			if (!is_word)
			{
				is_word = 1;
				word_length = 1;
				words[word_index] = malloc(sizeof(char));
				if (words[word_index] == NULL)
				{
					for (i = 0; i < word_index; i++)
					{
						free(words[i]);
					}
					free(words);
					return (NULL);
				}
				words[word_index][0] = *str;
			}
			else
			{
				word_length++;
				words[word_index] = realloc(words[word_index], word_length * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (i = 0; i <= word_index; i++)
					{
						free(words[i]);
					}
					free(words);
					return (NULL);
				}
				words[word_index][word_length - 1] = *str;
			}
		}
		else
		{
			if (is_word)
			{
				is_word = 0;
				word_length++;
				words[word_index] = realloc(words[word_index], word_length * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (i = 0; i <= word_index; i++)
					{
						free(words[i]);
					}
					free(words);
					return (NULL);
				}
				words[word_index][word_length - 1] = '\0';
				word_index++;
			}
		}
		str++;
	}
	if (is_word)
	{
		word_length++;
		words[word_index] = realloc(words[word_index], word_length * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (i = 0; i <= word_index; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		words[word_index][word_length - 1] = '\0';
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
