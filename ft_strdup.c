#include <libft.h>

char	*ft_strdup(const char *src)
{
	char	*str;

	str = (char*)malloc(sizeof(src) + 1);
	if (str != NULL)
		ft_strcpy(str, src);
	return (str);
}
