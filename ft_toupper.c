int     ft_toupper(int c)
{
  if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
    return (c - 32);
  return (c);
}
