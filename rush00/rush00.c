void	ft_putchar(char letter);
char	check(int x_check, int y_check);

void	rush(int x, int y)
{
	int	x_1;
	int	y_1;

	y_1 = 1;
	if (check(x, y) == 'Y')
	{
		while (y_1 <= y)
		{
			x_1 = 1;
			while (x_1 <= x)
			{
				if ((x_1 == 1 || x_1 == x) && (y_1 == 1 || y_1 == y))
					ft_putchar('o');
				else if (x_1 == 1 || x_1 == x)
					ft_putchar('|');
				else if ((y_1 > 1 && y_1 < y) && (x_1 > 1 && x_1 < x))
					ft_putchar (' ');
				else
					ft_putchar ('-');
				x_1++;
			}
			ft_putchar ('\n');
			y_1++;
		}
	}
}
