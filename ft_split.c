
#include "libft.h"


char **copy_word(char const *s, char c, char **array)
{
  size_t  i;
  size_t  j;
  size_t  h;
  
  h = 0;
  h = 0;
  i = 0;
  j = 0;
  while(s[i])
  {     
    while(s[i] != c && s[i])
    {
      array[h][j] = s[i];
      j++;
      i++;
    }
    if (j > 0)
    {
      array[h][j] = '\0';
      h++;
    }  
    if (j == 0)
      i++;
    j = 0; 
  }
  return (array);
}


size_t count(char const *s, char c)
{
  size_t  i;
  size_t  j;
  size_t  h;
  
  h = 0;
  i = 0;
  j = 0;
  while(s[i])
  {     
    while(s[i] != c && s[i])
    {
      j++;
      i++;
    }
    if (j > 0)
      h++; 
    if (j == 0)
      i++;
    j = 0; 
  }
  return (h);
}

void **ft_split(char const *s, char c)
{
  char **array;
  size_t  i;
  size_t  j;
  size_t  h;
  
  h = count(s,c);
  array = malloc((h + 1) * sizeof(char *));
  array[h] = NULL;
  h = 0;
  i = 0;
  j = 0;
  while(s[i])
  {     
    while(s[i] != c && s[i])
    {
      j++;
      i++;
    }
    if (j > 0)
    {
      array[h] = malloc(j + 1);
      h++;
    }
    if (j == 0)
      i++;
    j = 0; 
  }
  return (copy_word(s,c,array));
}