#include <string.h>

size_t	ft_line_count(char const *s, char c)
{
  size_t i;
  size_t result;
  size_t k;

  k = 0;
  result = 0;
  i = 0;
  while (s[i])
    {
      if (s[i] == c)
        {
          while (s[i] == c)
            i++;
	  if (s[i] == '\0' && k == 0)
	    return (result);
          result++;
        }
      else
	{
	  k = 1;
	  if (s[i + 1] == '\0' && result == 0)
	    return (1);
	  i++;
	}
    }
  if (result == 1)
    return (result);
    if (s[i - 1] == c && k == 1)
   return (result - 1);
  return (result);
}
