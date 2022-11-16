#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	n;

	i = 0;
	x = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{	
			x = x * -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = (str[i] - 48) + (n * 10);
		i++;
	}
	return (x * n);
}
/*int main (void)
{
	char s1[] = "   ---+--+1234ab567";
	char s2[] = "1234ab567";

	printf ("%d\n", ft_atoi(s1));
	printf ("%d", atoi(s2));
}*/
