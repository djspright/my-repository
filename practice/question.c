#include "stdio.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	appear_once(char *str, char c)
{
	int	i;
	int	count;
	int	len;

	i = 0;
	count = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] == c)
			count++;
		i++;
	}
	if (count == 1)
		return (1);
	else
		return (0);
}

int	find_index(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (appear_once(str, str[i]) == 1)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "aaabbcddeeef";

	printf("%d\n", find_index(str));
}
