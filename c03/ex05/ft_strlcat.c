#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while ((src[x] != '0') && (i + x + 1) < size)
	{
		dest[i + x] = src[x];
		x++;
		if (i < size)
		dest[i + x] = '\0';
	}
	return (x + i);
}
/*int main (void)
{
	char src[] = " Que dice er tio ";
	char dest[] = " Que dice la tia ";
	
	printf("%i \n", ft_strlcat(dest, src, 40));
	printf("%s \n", dest);
}*/
