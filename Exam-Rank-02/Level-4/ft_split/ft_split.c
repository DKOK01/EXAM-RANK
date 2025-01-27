#include <stdlib.h>

// Helper function to check if a character is a delimiter
int		is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

// Helper function to count the number of words in the string
int		count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (!is_delimiter(*str) && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (is_delimiter(*str))
			in_word = 0;
		str++;
	}
	return (count);
}

// Helper function to allocate and copy a word
char	*copy_word(char *start, int len)
{
	char *word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	int i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

// Main split function
char	**ft_split(char *str)
{
	int word_count = count_words(str);
	char **result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);

	int i = 0;
	while (*str)
	{
		// Skip delimiters
		while (is_delimiter(*str))
			str++;

		// Find the start of a word
		if (*str)
		{
			char *start = str;
			int len = 0;

			// Find the length of the word
			while (*str && !is_delimiter(*str))
			{
				str++;
				len++;
			}

			// Copy the word into the result array
			result[i++] = copy_word(start, len);
		}
	}

	result[i] = NULL; // Null-terminate the array
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char **result = ft_split("   hello   world   ");
// 	for (int i = 0; result[i] != NULL; i++)
// 		printf("[%s]\n", result[i]);
// 	return 0;
// }
