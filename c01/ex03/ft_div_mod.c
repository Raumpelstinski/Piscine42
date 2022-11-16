void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main(void)
{
	int div;
	int mod;
	int a;
	int b;
		
	a = 20;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("Resultado division \n %d \n Resto \n %d",div,mod);
	return(0);
}*/
