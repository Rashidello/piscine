#include <stdio.h>

void	ft_swap(int *a,int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}	

int main()
{
	int k = 99;
	int l = 88;

	printf("this is a = %d and b = %d", k, l);

	ft_swap(&k,&l);
	printf("\nthis is after swapping a = %d and b = %d",k,l);

}
