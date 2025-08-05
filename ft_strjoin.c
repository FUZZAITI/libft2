#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char		*result;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = malloc(i);
	if (!result)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
