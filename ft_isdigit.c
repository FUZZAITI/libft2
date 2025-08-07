/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:15:39 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/30 10:02:50 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("0: %d | %d\n", ft_isdigit('0'), isdigit('0'));  
	printf("5: %d | %d\n", ft_isdigit('5'), isdigit('5'));  
	printf("9: %d | %d\n", ft_isdigit('9'), isdigit('9'));  
	printf("a: %d | %d\n", ft_isdigit('a'), isdigit('a'));  
	printf(" : %d | %d\n", ft_isdigit(' '), isdigit(' ')); 
	return (0);
}
*/