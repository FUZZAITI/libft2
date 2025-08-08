char    *ft_strtrim(char const *s1, char const *set)
{
  size_t  start;
  size_t  end;
  size_t  size;
  char    *resul;
  size_t  i;
  
  i = 0;
  end = ft_strlen(s1) - 1;
  start = 0;
  while (s1[start] && in_set(s1[start], set))
    start++;  
  while (s1[end] && in_set(s1[end], set))
    end--;
  size = (end - start) + 2;
  resul = malloc(size);
  while(start <= end)
  {
    resul[i] = s1[start];
    i++;
    start++;
  }
  resul[i] = '\0';
  return (resul);
}

int    in_set(char c, const char *set)
{
  while(*set)
  {
    if (c == *set)
      return (1);
    set++;  
  }
  return (0);
}