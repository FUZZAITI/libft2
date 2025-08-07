/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:16:28 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/30 10:06:18 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void				*s;
	size_t				tam;

	tam = nmemb * size;
	if (size != 0 && tam / size != nmemb)
		return (0);
	s = malloc(tam);
	if (!s)
		return (0);
	ft_bzero(s, tam);
	return (s);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*arr;
	size_t	n = 5;

	arr = ft_calloc(n, sizeof(int));
	if (!arr)
	{
		printf("Erro ao alocar memória\n");
		return (1);
	}
	for (size_t i = 0; i < n; i++)
		printf("%d ", arr[i]);  
	printf("\n");
	free(arr);
	return (0);
}
*/