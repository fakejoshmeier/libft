void	*ft_memset(void *s, int c, size_t n)
{
	size_t	z;
	char*	res;

	res = s;
	z = 0;
	while (z < n)
		*(res + i++) = c;
	return (s);
}
