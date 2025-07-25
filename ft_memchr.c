void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned const char *str = (unistd const char *)s;
    unsigned char val = (unsigned char)c;
    size_t      i;

    i = 0;
    while(i < n)
    {
        if (str[i] == val)
            return ((void *)&str[i]);
        i++;    
    }      
    return (0);
}