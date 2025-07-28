void ft_putnbr_fd(int n, int fd)
{
    char       *str;
    int         i;

    i = 0;
    str = itoa(n);
    while (str[i] != '\0')
    {
        write(fd,&str[i], 1);
        i++;
    }
}