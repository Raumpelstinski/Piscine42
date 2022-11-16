#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		write (1, &neg, 1);
	}
	else
	{
		write (1, &pos, 1);
	}
}
/*void ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(0);
	return(0);
}*/
