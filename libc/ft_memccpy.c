#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	count;
	char	*mid;
	
	count = -1;
	mid = dest;
	while (++count < n)
	{
		*(mid + count) = *((unsigned char *)src + count);
		if (*((unsigned char *)src + count) == (unsigned char)c)
			return (dest + count + 1);
	}
	return (NULL);
}
