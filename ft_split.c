/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:01:38 by pepinhei          #+#    #+#             */
/*   Updated: 2025/08/11 14:38:05 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_all(char **array, size_t i);
static size_t	count_words(const char *s, char c);
static void		build(char **array, const char *s, char c);
static int		size_words(char **array, const char *s, char c);
char			**ft_split(const char *s, char c);

static	void	free_all(char **array, size_t i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free (array);
}

static size_t	count_words(const char *s, char c)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	build(char **array, const char *s, char c)
{
	size_t					count;
	size_t					len;
	const char				*start;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			start = s;
			len = 0;
			while (*s && *s != c)
			{
				s++;
				len++;
			}
			ft_strlcpy(array[count], start, len + 1);
			count++;
		}
	}
}

static	int	size_words(char **array, const char *s, char c)
{
	size_t		i;
	size_t		size;
	size_t		len;

	i = 0;
	size = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = 0;
		while (s[i + len] && s[i + len] != c)
			len++;
		if (len > 0)
		{
			array[size] = malloc(len + 1);
			if (!array[size])
				return (0);
			size++;
			i += len;
		}
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char		**array;
	size_t		size;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	array = malloc((size + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array[size] = NULL;
	if (!size_words(array, s, c))
	{
		free_all(array, size);
		return (NULL);
	}
	build(array, s, c);
	return (array);
}
