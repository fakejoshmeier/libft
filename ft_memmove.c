#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t byte)
{
	char	*temp_d;
	char	*temp_s;
	size_t	i;

	i = -1;
	temp_d = (char *)dst;
	temp_s = (char *)src;
	if (temp_s < temp_d)
		while ((int)(--byte) >= 0)
			*(temp_d + byte) = *(temp_s + byte);
	else
		while (++i < byte)
			*(temp_d + i) = *(temp_s + i);
	return (dst);
}
