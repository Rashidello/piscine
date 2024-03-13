#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char re;
	re = 'z';
	while(re >= 'a')
	{
		write(1, &re, 1);
		re--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
}
