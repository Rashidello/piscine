#include <unistd.h>

void ft_print_numbers(void)
{
	char  i;
	i = '0';
	while (i <= '9')
	{
		write(1,&i,1);
		write(1,"\n",1);
		i++;
	}
}

int main()
{
	ft_print_numbers();
}
