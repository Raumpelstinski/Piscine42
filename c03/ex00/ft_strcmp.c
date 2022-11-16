int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			return (x);
		}
	i++;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
/
	char str1[] = "Quillo que pasasdada!";
	char str2[16] = "Quillo zzz pasa!as";

	printf("%d", ft_strcmp(str1, str2));
}*/
