void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*#include <stdio.h>
int main(void)
{
	int a;
	int b;
	a = 5;
	b = 8;
	ft_swap(&a, &b);
	printf("Funciona \n %d \n %d", a, b);
	return(0);
}*/
