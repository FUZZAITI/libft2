size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t lensrc;
    size_t lendst;

    lensrc = ft_strlen(src);
    lendst = ft_strlen(dst);
    if (dstsize <= lendst)
        return (dstsize + lensrc);
    i = lendst;
    j = 0;
    while (i < dstsize - 1 && src[j] != '\0')
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (lendst + lensrc);     
}