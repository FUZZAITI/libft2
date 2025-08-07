/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:15:35 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/30 10:21:57 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("  A: %d | %d\n", ft_isascii('A'), isascii('A'));       
	printf("127: %d | %d\n", ft_isascii(127), isascii(127));    
	printf("128: %d | %d\n", ft_isascii(128), isascii(128));     
	printf(" -1: %d | %d\n", ft_isascii(-1), isascii(-1));       
	printf("  0: %d | %d\n", ft_isascii(0), isascii(0));        
	return 0;
}
*/