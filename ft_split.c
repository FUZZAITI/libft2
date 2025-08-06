
#include "libft.h"

size_t  count_words(char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

int	build_word(char **array, size_t count, size_t len)
{
	array[count] = malloc(len);
	if (!array[count])
		return (0);
	array[count][len - 1] = '\0';
	return (1);
}

int	fill_array(char **array, char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	i = 0;
	count = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
		{
			i++;
			len++;
		}
		if (len > 0)
		{
			if (!build_word(array, count - 1, len + 1))
				return (0);
		}
	}
	array[count] = NULL;
	return (1);
}

void	fill_words(char **array, char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	i = 0;
	count = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
		{
			array[count - 1][len] = s[i];
			i++;
			len++;
		}
	}
}

char	**ft_split(char *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (!fill_array(array, s, c))
	{
		free(array);
		return (NULL);
	}
	fill_words(array, s, c);
	return (array);
}
