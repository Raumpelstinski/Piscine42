#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = argc - 1;
	while (i > 0)
	{
		x = 0;
		while (argv[i][x] != '\0')
		{
			write (1, &argv[i][x], 1);
			x++;
		}
		i --;
		write (1, "\n", 1);
	}
	return (0);
}
