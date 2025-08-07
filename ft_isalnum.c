/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:15:23 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/30 10:02:40 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| ((c >= '0' && c <= '9')))
		return (1);
	return (0);
}

/*
#include <stdio.h>



int main(void)
{
	printf("A: %d\n", ft_isalnum('A'));  
	printf("z: %d\n", ft_isalnum('z'));  
	printf("5: %d\n", ft_isalnum('5'));  
	printf("!: %d\n", ft_isalnum('!'));  
	printf(" : %d\n", ft_isalnum(' '));  
	return 0;
}
*/