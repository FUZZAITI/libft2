#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *ptr = (unsigned char *)dst;
    const unsigned char *ptrsrc = (const unsigned char *)src;
    size_t      i;

    if (!dst && !src)
		  return (0);
    
    i = 0;
    while (n > 0)
    {
        ptr[i] = ptrsrc[i];
        i++;
        n--;
    }
    return (dst);
}