char *ft_strchr(const char *s, int c)
{
    unsigned const char *str = (unsigned const char *)s;
    unsigned char x = (unsigned char)c;

    while (*str)
    {
        if (*str == x)
            return ((char *)str);
        str++;
    }
    if (*str == x)
        return ((char *)str);
    return (0);
}