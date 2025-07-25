void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unsigned char *)b;
    unsigned char val = (unsigned char)c;
    size_t      i;

    i = 0;
    while (len > 0)
    {
        ptr[i] = val;
        len--;
        i++;
    }
    return (b);
}