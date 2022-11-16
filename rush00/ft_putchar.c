#include <unistd.h>

void	ft_putchar(char letter)
{
	write (1, &letter, 1);
}

char	check(int x, int y)
{
	if (x > 0 && y > 0 && x <= 360)
	{
		return ('Y');
	}
	else if (x == 0 || y == 0)
	{
		write (1, "ERROR: Any of the input values is equal to 0.\n", 47);
		return ('N');
	}
	else if (x < 0 || y < 0)
	{
		write (1, "ERROR: One of the input values is negative.\n", 45);
		return ('N');
	}
	else
	{
		write (1, "ERROR: Value of row outside the range (1-360).\n", 55);
		return ('N');
	}
}
