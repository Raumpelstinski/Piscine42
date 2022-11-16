void	ft_putchar(char letter);
char	check(int x_check, int y_check);

void	rush(int x, int y)
{
	int	px;
	int	py;

	py = 1;
	if (check(x, y) == 'Y')
	{
		while (py <= y)
		{
			px = 1;
			while (px <= x)
			{
				if ((px * py == 1) || (px == x && py == y && x != 1 && y != 1))
					ft_putchar('A');
				else if ((px == 1 && py == y) || (py == 1 && px == x))
					ft_putchar('C');
				else if ((py > 1 && py < y) && (px > 1 && px < x))
					ft_putchar (' ');
				else
					ft_putchar ('B');
				px++;
			}
			ft_putchar ('\n');
			py++;
		}
	}
}
