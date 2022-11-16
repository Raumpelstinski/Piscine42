int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == '\0')
			return ((s2[i]) * (-1));
		if (s1[i] == '\0')
			return (s1[i]);
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{  
	char str1[16] = "";
    char str2[16] = "0klñdskj";

    printf("%d\n", ft_strncmp(str1, str2, 1));
	printf("%d", strncmp(str1, str2, 2));
}*/
