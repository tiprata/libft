#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
  size_t i;
  size_t j;
  size_t k;
  char *str;

  k = 0;
  i = 0;
  j = 0;
  if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s))))
    return (NULL);

  while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
    i++;
  j = ft_strlen(s) - 1;
  while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
    j--;
  while (i <= j)
    str[k++] = s[i++];
  return (str);
}