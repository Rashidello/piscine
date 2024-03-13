#include <unistd.h>

void ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1,"is negative", 11);
	}
	else
	{
		write(1,"is positive", 11);
	}
}

int main()
{
	ft_is_negative(2);
}
