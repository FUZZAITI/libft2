/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:04:59 by pepinhei          #+#    #+#             */
/*   Updated: 2025/08/11 12:06:20 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*result;
	size_t			tam;
	size_t			count;

	if (!s)
		return (0);
	i = 0;
	tam = ft_strlen(s);
	count = len;
	if (start >= tam)
		return (ft_strdup(""));
	if ((tam - start) > len)
		result = malloc(len + 1);
	else
		result = malloc((tam - start) + 1);
	while (s[start] != '\0' && count > 0)
	{
		result[i] = s[start];
		i++;
		start++;
		count--;
	}
	result[i] = '\0';
	return (result);
}
