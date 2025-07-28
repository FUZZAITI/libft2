#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    unsigned const char *str = (unsigned const char *)s;
    unsigned char x = (unsigned char)c;
    size_t      i;

    i = ft_strlen(str);

    while (i >= 0)
    {
        if (str[i] == c)
            return ((char *)(str + i));
        i--;
    }
    if (str[i] == c)
        return ((char *)(str + i));
    return (0);
}