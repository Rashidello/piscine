#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	if((str[i] == 0) || (str[i] >= 48 && str[i] <= 59))
		return (1);
	else
		return (0);
}
int main()
{
	char *nu = "";
	printf("%d", ft_str_is_numeric(nu));
}
