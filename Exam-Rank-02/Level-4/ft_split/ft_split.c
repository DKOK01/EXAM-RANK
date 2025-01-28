#include <stdlib.h>

int		is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

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

char	**ft_split(char *str)
{
	int word_count = count_words(str);
	char **result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);

	int i = 0;
	while (*str)
	{
		while (is_delimiter(*str))
			str++;
		if (*str)
		{
			char *start = str;
			int len = 0;
			while (*str && !is_delimiter(*str))
			{
				str++;
				len++;
			}
			result[i++] = copy_word(start, len);
		}
	}
	result[i] = NULL;
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
