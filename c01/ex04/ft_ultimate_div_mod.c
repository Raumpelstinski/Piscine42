void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}
/*
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	
	a = 50;
	b = 20;
	ft_ultimate_div_mod(&a, &b);
	printf("Resultado \n %d \n Resto \n %d", a, b);
	return(0);
}*/
