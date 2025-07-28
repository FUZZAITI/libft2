#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *s11 = (const unsigned char *)s1;
    const unsigned char *s22 = (const unsigned char *)s2;
    size_t      i;

    i = 0;
    while (n > 0)
    {
        if (s11[i] != s22[i])
            return (s11[i] - s22[i]);
        i++;
        n--;
    }
    return (0);
} 