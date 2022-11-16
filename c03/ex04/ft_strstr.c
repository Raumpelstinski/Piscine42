#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		x = 0;
		while (str[i + x] == to_find[x])
		{
			x++;
			if (to_find[x] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*int main ()
{
	char s1[] = "El pperdfghro bopppppperronito";
	char s2[]= "perro";
    
    printf("%s\n", ft_strstr(s1, s2));
	//printf("%s", strstr(s1, s2));
	return (0);
}*/
