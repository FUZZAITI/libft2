/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:15:43 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/30 09:29:13 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("'A': %d | %d\n", ft_isprint('A'), isprint('A'));    
	printf("'~': %d | %d\n", ft_isprint('~'), isprint('~'));   
	printf("' ': %d | %d\n", ft_isprint(' '), isprint(' '));   
	printf("'\\n': %d | %d\n", ft_isprint('\n'), isprint('\n'));
	printf("127: %d | %d\n", ft_isprint(127), isprint(127));  
	return (0);
}
*/