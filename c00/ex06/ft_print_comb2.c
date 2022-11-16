#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	d1;
	int	d2;

	d1 = 0;
	while (d1 < 100)
	{
		d2 = d1 + 1;
		while (d2 < 100)
		{
			ft_putchar (d1 / 10 + '0');
			ft_putchar (d1 % 10 + '0');
			ft_putchar (' ');
			ft_putchar (d2 / 10 + '0');
			ft_putchar (d2 % 10 + '0');
			if (d1 != 98)
			{
				write (1, ", ", 2);
			}
			d2++;
		}
		d1++;
	}
}
/*void ft_print_comb2 (void);

int	main(void)
{
	ft_print_comb2();
	return(0);
}*/
