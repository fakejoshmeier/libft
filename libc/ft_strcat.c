#include <libft.h>

char	*strcat(char *dst, const char *src)
{
	size_t dst_len;
	size_t i;

	dst_len = ft_strlen(dst);
	i = -1;
	while (src[++i])
		dst[dst_len + i] = src[i];
	dst[dst_len + i] = '\0';

	return (dst);
}
