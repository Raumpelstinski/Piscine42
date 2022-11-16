void	ft_rev_int_tab( int *tab, int size)
{
	int	count;
	int	swap;

	count = 0;
	swap = 0;
	size--;
	while (count < size)
	{
		swap = tab[count];
		tab[count] = tab[size];
		tab[size] = swap;
		count++;
		size--;
	}
}
/*
#include <stdio.h>
int main(void)
{
	int tab[5] = {0,1,2,3,4};
	int size;

	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	return(0);
}*/
