void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = 0;
	while (j < size)
	{
		i = j + 1;
		while (i < size)
		{
			if (tab[i] < tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			i++;
		}
		j++;
	}
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{	
	int tab[5] = {4,3,2,1,0};
	ft_sort_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return(0);
}*/
