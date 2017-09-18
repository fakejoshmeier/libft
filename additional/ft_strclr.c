#include <libft.h>

void	ft_strclr(char *s)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s);
	str = s;
	while (str[i--] > -1)
		str[i] = '\0';
}
