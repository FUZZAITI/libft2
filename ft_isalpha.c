/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinhei <pepinhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:15:29 by pepinhei          #+#    #+#             */
/*   Updated: 2025/07/30 10:02:44 by pepinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("A: %d | %d\n", ft_isalpha('A'), isalpha('A'));  // 1 | 1
	printf("z: %d | %d\n", ft_isalpha('z'), isalpha('z'));  // 1 | 1
	printf("9: %d | %d\n", ft_isalpha('9'), isalpha('9'));  // 0 | 0
	printf("#: %d | %d\n", ft_isalpha('#'), isalpha('#'));  // 0 | 0
	printf(" : %d | %d\n", ft_isalpha(' '), isalpha(' '));  // 0 | 0
	return 0;
}
*/