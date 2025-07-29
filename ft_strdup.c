#include "libft.h"

char  *ft_strdup(const char *s)
{
    char       *dup;
    size_t      i;

    i = ft_strlen(s) + 1;
    dup = malloc(i);
    if (!dup)
        return (0);
    ft_memcpy(dup, s, i);
    return (dup);     
}