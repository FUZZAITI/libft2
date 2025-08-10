char    *ft_strtrim(char const *s1, char const *set)
{
  size_t  start;
  size_t  end;
  size_t  size;
  char    *resul;
 
  if (!s1 || !set)
    return (0);
  end = ft_strlen(s1) - 1;
  start = 0;
  while (s1[start] && in_set(s1[start], set))
    start++;  
  while (end >= start && in_set(s1[end], set))
    end--;
  size = (end - start) + 2;
  resul = malloc(size);
  if (!resul)
    return (0);
  ft_strlcpy(resul, s1 + start,size);
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