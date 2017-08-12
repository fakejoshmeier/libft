#include <libft.h>

int		ft_atoi(const char *str)
{
	int		sign;
	int		i;
	long	res;

	res = 0;
	i = 0;
	sign = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == ' ' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		res *= 10;
		res += (int)str[i] - '0';
		i++;
	}
	if (sign)
		res = -res;
	return (res);
}

