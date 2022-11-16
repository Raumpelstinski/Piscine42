#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	char str[]= "Hola";

	ft_putstr(str);
	return(0);
}*/