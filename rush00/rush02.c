void	ft_putchar(char letra);
char	check(int a, int b);

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
				if ((x_1 == 1 && y_1 == 1) || (x_1 == x && y_1 == 1))
					ft_putchar('A');
				else if ((x_1 == x && y_1 == y) || (x_1 == 1 && y_1 == y))
					ft_putchar('C');
				else if ((y_1 > 1 && y_1 < y) && (x_1 > 1 && x_1 < x))
					ft_putchar (' ');
				else
					ft_putchar ('B');
				x_1++;
			}
			ft_putchar ('\n');
			y_1++;
		}
	}
}
