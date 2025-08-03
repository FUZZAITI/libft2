#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t  i;
  char    *result;
  size_t  tam;
  size_t count;
  
  i = 0;
  tam = ft_strlen(s);
  count = len;
  if (start >= tam)
    return (ft_strdup(""));
  if ((tam - start) > len)
    result = malloc(len + 1);
  else
    result = malloc((tam - start) + 1);
  while (s[start] != '\0' && count > 0)
  {
    result[i] = s[start];
    i++;
    start++;
    count--;
  }
  
  result[i] = '\0';
  return (result);
  
}