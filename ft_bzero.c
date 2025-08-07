/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:15:14 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/30 09:51:15 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char		*ptr;
	size_t				i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		ptr[i] = '\0';
		i++;
		n--;
	}
}

/*
#include <stdio.h>
#include <string.h> 

int main(void)
{
	char str1[10] = "123456789";
	char str2[10] = "123456789";

	ft_bzero(str1, 5);
	bzero(str2, 5);

	printf("ft_bzero: \"%s\"\n", str1);  
	printf("   bzero: \"%s\"\n", str2);  
	return 0;
}
*/