#include <stdio.h>

void ft_div_mod(int a, int b,int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 1;
	int b = 8;
	int div_res;
	int mod_res;
	ft_div_mod(a, b, &div_res, &mod_res);
	
	printf("%d\n", div_res);
	printf("%d", mod_res);

}
