#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (src[i] != '\0' && i<n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
int main()
{
	int n = 9;
	char src[] = "hello";
	char dest[20];
	ft_strncpy(dest, src,n);
	printf("%s", dest);
}