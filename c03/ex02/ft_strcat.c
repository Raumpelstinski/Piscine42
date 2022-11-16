#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main ()
{
	char dest[40] = "Hola ";
	char src[]= "mundo hola";
	char dest1[40] = "Hola ";
	char src1[]= "mundo hola";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest1, src1));
	return (0);
}*/
