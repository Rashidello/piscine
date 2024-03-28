#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main()
{
	int num;
	int *nbr = &num;
	ft_ft(nbr);
	printf("%d", num);

}
