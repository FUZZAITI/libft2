#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *dst2 = (unsigned char *)dst;
    unsigned const char *src2 = (unsigned const char *)src;
    size_t      i;

    i = 0;
    if (!dst && !src)
        return (0);

    if (dst2 < src2)
        return (ft_memcpy(dst, src, len));
    else
    {
        while (len > 0)
        {
            len--;
            dst2[len] = src2[len];
        }
    }
    return (dst)
}