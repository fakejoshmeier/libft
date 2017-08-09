#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;
	unsigned char	*str;
	unsigned char	i;

	count = -1;
	i = (unsigned char)c;
	str = (unsigned char *)s;
	while (++count < n)
	{
		if (str[count] == i)
			return ((void *)str + count);
	}
	return (NULL);
}
