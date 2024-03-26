#include <unistd.h>

void pc(char k)
{
	write(1,&k,1);
}
void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while(b <= '8')
		{
			c = b + 1;
			while(c <= '9')
			{
				pc(a);
				pc(b);
				pc(c);
				
				while(a != '7')
				{
					write(1,", ",2);
					break;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
int main()
{
	ft_print_comb();
}
