#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	x = 0;
	while ((src[x] != '\0') && (x < nb))
	{
		dest[i++] = src[x++];
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
    
    printf("%s\n", ft_strncat(dest, src, 4));
	printf("%s\n", strncat(dest1, src1, 4));
	return (0);
}*/
