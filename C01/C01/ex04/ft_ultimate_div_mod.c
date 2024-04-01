#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int p;
	int m;

	p = *a / *b;
	m = *a % *b;
	*a = p;
	*b = m;
}
int main()
{
	int n;
	int l;
	int c = 20;
	int d = 2;

	ft_ultimate_div_mod( &c, &d);
	printf("%d\n",c );
	printf("%d\n",d);
}
