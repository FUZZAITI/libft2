void *ft_calloc(size_t nmemb, size_t size)
{
    void        *s;
    size_t      tam;

    tam = nmemb * size;
    if (size != 0 && tam / size != nmemb)
        return (0);
    s = malloc(tam);
    if (!s)
        return (0);
    ft_bzero(s, tam);
    return (s);        
}