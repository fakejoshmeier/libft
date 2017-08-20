#include <libft.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*mid;
	char	*dle;

	count = 0;
	mid = dest;
	dle = (char *)src;
	while (count++ < n)
		*(mid + count) = *(dle + count);
	return (dest);
}
