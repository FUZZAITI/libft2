#include "libft.h"


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *result;
  size_t i;
  size_t size;
  
  i = 0;
  size = 0;
  if (!s || !f)
    return (0);
  size = ft_strlen(s);
  result = malloc(size + 1);
  if (!result)
    return (0);
  while (s[i] != '\0')
  {
    result[i] =  f(i,s[i]);
    i++;
  }
  result[i] = '\0';
  return result;
}