
char **ft_split(char const *s, char c)
{

}

size_t count(char const *s, char c)
{
  size_t  i;
  size_t  j;
  size_t  h;

  i = 0;
  j = 0;
  h = 0;

  while(s[i] != '\0')
  {     
    while(s[i] != c && s[i] != '\0')
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