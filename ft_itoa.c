char *itoa(int n)
{
    int             neg;
    int             len;
    char            *ptr;
    long int        num;

    num = n;
    neg = 0;
    if(num < 0)
    {
        neg = 1;
        num = -num;
    }
    len = count(num) + neg;
    ptr = malloc(len + 1);
    ptr[len] = '\0';
    if (num == 0)
    {
        ptr[0] = '0';
        return (ptr);
    }
    while (num > 0)
    {
        ptr[--len] = (num % 10) + '0';
        num = num / 10;
    }
    if (neg)
        ptr[0] = '-';
    return (ptr);
}

int count(int n)
{
    int     i;

    i = 0;
    if (n == 0)
        return (1);
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}