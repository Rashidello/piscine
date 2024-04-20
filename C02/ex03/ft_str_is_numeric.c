#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0'
	{
		if((str[i] >= 48 && str[i] <= 59))
			i++;
		else
			return (0);
	}
	retrun(1);
}
int main()
{
	char *nu = "";
	printf("%d", ft_str_is_numeric(nu));
}
